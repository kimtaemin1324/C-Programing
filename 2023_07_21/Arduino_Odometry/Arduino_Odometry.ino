#include <LSM303.h>
#include <Wire.h>
#include <map.h>

#define EncoderAPin 2
#define EncoderBPin 3
#define pulse2m 0.000488

const unsigned long width = 100; // 100 ms (10 Hz)

volatile int counter = 0;
volatile int encoderB;

double angle = 0.0;
double angle_old = 0.0;
double angle_diff = 0.0;

double distance = 0.0;
double x = 0.0; // X-coordinate (position) of the robot
double y = 0.0; // Y-coordinate (position) of the robot

unsigned long enc_time;
unsigned long enc_time_old;
unsigned long enc_time_diff;

unsigned long previousMillis = 0;

bool flag = 0;

// pulse:410

LSM303 compass;

void Encoder()
{
  enc_time = millis();
  enc_time_diff = enc_time - enc_time_old;

  encoderB = digitalRead(EncoderBPin);

  if (encoderB == HIGH)
  { // ccw
    counter++;
  }
  else
  { // cw
    counter--;
  }
  enc_time_old = enc_time;
}

void setup()
{
  Serial.begin(115200);
  Wire.begin();
  compass.init();

  pinMode(EncoderAPin, INPUT_PULLUP);
  pinMode(EncoderBPin, INPUT_PULLUP);

  compass.enableDefault();

  attachInterrupt(digitalPinToInterrupt(EncoderAPin), Encoder, RISING);
}

void loop()
{
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= width)
  {
    compass.read();

    double angle_new = atan2(compass.a.x, compass.a.y) * RAD_TO_DEG;
    angle_diff = angle_new - angle_old;
    angle_old = angle_new;

    distance = (counter * pulse2m); // Arc length calculation

    // Calculate odometry using distance and angle_diff
    if (angle >= 0)
    {
      double dx = distnace * cos(angle_new * DEG_TO_RAD);
      double dy = distance * sin(angle_new * DEG_TO_RAD);
    }

    x += dx;
    y += dy;

    previousMillis = currentMillis;
  }
  Serial.print("Heading_Angle = ");
  Serial.println(angle_old);
  Serial.print("Delta_Angle = ");
  Serial.println(angle_diff);
  Serial.print("Pulse_counter: ");
  Serial.println(counter);
  Serial.print("Wheel_tick: ");
  Serial.println((counter * pulse2m));
  Serial.print("Distance: ");
  Serial.println(distance);
  Serial.print("Odometry X: ");
  Serial.println(x);
  Serial.print("Odometry Y: ");
  Serial.println(y);
}
