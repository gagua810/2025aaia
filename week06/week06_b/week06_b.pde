//week06-b
//從 week06-4a延伸過來 利用for(int k=i;k<N-1;i++)回收飼料
void setup() {
  size(600, 400);
}
float []x = new float[100];//有100個x和100個y
float []y = new float[100];//Java的陣列宣告
int N = 0;//飼料有N顆
void draw() {
  background( #c0ffee);//咖啡青色 0不是o
  for (int i=0; i<N; i++) {
    ellipse(x[i], y[i], 8, 8);
    y[i] += 2;
    if (y[i]>400) {   //飼料掉到外面/看不到
      for (int k=i; k<N-1; k++) {//要回收
        x[k] = x[k+1];//右邊搬到左邊
        y[k] = y[k+1];
      }
      N--;//回收完1顆飼料
    }
    println(N);//把N在小黑印出來
  }
}
void mousePressed() {
  x[N] = mouseX;
  y[N] = mouseY;
  N++;//增加1顆飼料
}
