// week08_07_pacman_part3_keyPressed_d_PI
// File-Preference 字型放大
void setup(){
  size(400, 500);
}
int x = 200, y = 250, dx=0, dy=0; // 座標
float m = 0, dm=0.03, d=0; // 嘴巴大小 vs. 改變量
void draw(){
  background(0);
  fill(255, 255, 0); // 黃色的
  //ellipse(x, y, 30, 30); // 小精靈
  arc(x, y, 30, 30, d+m, d+PI*2-m); // 小精靈
  m += dm; // 嘴巴大小 改變了
  if(m>1 || m<0) dm = -dm; // 太大或太小,就負號
  x += dx;
  y += dy;
}
void keyPressed(){
  if(keyCode==LEFT) {dx = -1; dy=0; d=PI;}
  if(keyCode==RIGHT){dx = +1; dy=0; d=0;}
  if(keyCode==UP)   {dy = -1; dx=0; d=PI/2*3;}
  if(keyCode==DOWN) {dy = +1; dx=0; d=PI/2;}
}
