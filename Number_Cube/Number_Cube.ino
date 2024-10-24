//Digital tube display 
//Common anode digital tube model: 5161BS 
//1-bit common anode digital tube display, interval 1S, cycle display 0,1,2,3,4,5,6,7,8,9,A,b,C,d,E,F

#include <Arduino.h>

#define SEG_a 2        //IO naming
#define SEG_b 3
#define SEG_c 4
#define SEG_d 5
#define SEG_e 6
#define SEG_f 7
#define SEG_g 8
#define SEG_h 9
#define SCL1 10
#define SCL2 11
#define SCL3 12
#define SCL4 13
//Digitizer 0-F digital code value
unsigned char table[16][8] =
{
  {1, 1,  0,  0,  0,  0,  0,  0},     //0
  {1, 1,  1,  1,  1,  0,  0,  1},     //1
  {1, 0,  1,  0,  0,  1,  0,  0},     //2
  {1, 0,  1,  1,  0,  0,  0,  0},     //3
  {1, 0,  0,  1,  1,  0,  0,  1},     //4
  {1, 0,  0,  1,  0,  0,  1,  0},     //5
  {1, 0,  0,  0,  0,  0,  1,  0},     //6
  {1, 1,  1,  1,  1,  0,  0,  0},     //7
  {1, 0,  0,  0,  0,  0,  0,  0},     //8
  {1, 0,  0,  1,  0,  0,  0,  0},     //9
  
  {1, 0,  0,  0,  1,  0,  0,  0},     //A
  {1, 0,  0,  0,  0,  0,  1,  1},     //b
  {1, 1,  0,  0,  0,  1,  1,  0},     //C
  {1, 0,  1,  0,  0,  0,  0,  1},     //d
  {1, 0,  0,  0,  0,  1,  1,  0},     //E
  {1, 0,  0,  0,  1,  1,  1,  0}      //F
};

void setup()
{
  pinMode(SEG_a, OUTPUT);       //Set pin to output
  pinMode(SEG_b, OUTPUT);
  pinMode(SEG_c, OUTPUT);
  pinMode(SEG_d, OUTPUT);
  pinMode(SEG_e, OUTPUT);
  pinMode(SEG_f, OUTPUT);
  pinMode(SEG_g, OUTPUT);
  pinMode(SEG_h, OUTPUT);
  pinMode(SCL1, OUTPUT);
  pinMode(SCL2, OUTPUT);
  pinMode(SCL3, OUTPUT);
  pinMode(SCL4, OUTPUT);
  
}

void loop()
{
  static int t = 0;
  static int number = 0;
  yyy(13);
  xxx(number/1000);
  delay(2);
  yyy(12);
  xxx((number/100)%10);
  delay(2);
  yyy(11);
  xxx((number/10)%10);
  delay(2);
  yyy(10);
  xxx(number%10);
  delay(2);
  t++;
  if(t==125){
    t=0;
    number++;
  }
  //循环显示0,1,2,3,4,5,6,7,8,9,A,b,C,d,E,F
}

void xxx(int i){
    digitalWrite(SEG_a, table[i][7]); //Setting the level of pin a
    digitalWrite(SEG_b, table[i][6]); //Setting the level of the b pin
    digitalWrite(SEG_c, table[i][5]); //Setting the level of the c pin
    digitalWrite(SEG_d, table[i][4]); //Setting the level of the d pin
    digitalWrite(SEG_e, table[i][3]); //Setting the level of the e pin
    digitalWrite(SEG_f, table[i][2]); //Setting the level of the f pin
    digitalWrite(SEG_g, table[i][1]); //Setting the level of the g pin
    digitalWrite(SEG_h, table[i][0]); //Setting the level of the h pin
}
void yyy(int i){
  digitalWrite(SCL1, 0); //Setting the level of the h pin
  digitalWrite(SCL2, 0); 
  digitalWrite(SCL3, 0); 
  digitalWrite(SCL4, 0); 
  digitalWrite(i, 1); //Set the level of the h pin 10-13
  }
