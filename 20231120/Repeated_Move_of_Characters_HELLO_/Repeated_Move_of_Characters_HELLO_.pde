/* 여기에 표시되는 코드의 색과 프로세싱에 표시되는 코드의 색은 다릅니다.*/
int x = -160;

void setup() {
  size(300, 100);
  fill(125, 0, 250);
  textSize(50);
}

void draw() {
  background(255); 
  text("HELLO", x, 50); 
  x++;                
  if(x == width){ // x가 끝으로 가면
    x = -160;      // 처음으로 돌아갑니다.
  }
}
