#include <MsTimer2.h>

#if ARDUINO >= 100
const int led_pin = LED_BUILTIN;
#else
const int led_pin = 13;
#endif

const int debug_pin1 = 33;
const int debug_pin2 = 34;

void serialprint(void)
{
  digitalWrite(debug_pin2, HIGH);
  Serial.println("debug");
  digitalWrite(debug_pin2, LOW);  // Fix: Changed 'DigitalWrite' to 'digitalWrite'
}

void flash()
{
  digitalWrite(debug_pin1, HIGH);
  serialprint();
  digitalWrite(debug_pin1, LOW);  // Fix: Changed 'debug_pin2' to 'debug_pin1'
}

void setup()
{
  pinMode(led_pin, OUTPUT);
  pinMode(debug_pin1, OUTPUT);
  pinMode(debug_pin2, OUTPUT);
  Serial.begin(115200);
  MsTimer2::set(20, flash);
  MsTimer2::start();
}

void loop()
{
  // No changes needed in the loop
}
