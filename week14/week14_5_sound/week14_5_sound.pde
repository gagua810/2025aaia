//week14_5_sound
import processing.sound.*;//Java使用外挂
SoundFile music, sword, monkey, intro;//宣告一個變數music
void setup() {
  size(640, 360);//記得要把音樂儅拉到程式裡
  music = new SoundFile(this,"In Game Music.mp3");
  sword = new SoundFile(this,"sword slash.mp3");
  monkey = new SoundFile(this,"Monkey 1.mp3");
  intro = new SoundFile(this,"Intro Song_Final.mp3");
  music.play();//play()播放
}
void mousePressed(){
  if(mouseButton==LEFT)sword.play();
  else monkey.play();
}
void draw(){
  //裡面是空白
}
