/* 7 segment led in terfacing */
/* display the number 1 to 9 setp by step by using 7 segment display */

#include <reg51.h>

sbit a = P1^0;
sbit b = P1^1;
sbit c = P1^2;
sbit d = P1^3;
sbit e = P1^4;
sbit f = P1^5;
sbit g = P1^6;
sbit h = P1^7;

void delay();

void main()
{

 g=0;  //configure as output ports 
 f=0;
 a=0;
 b=0;
 e=0;
 d=0;
 c=0;
 h=0;

 while(1)
 {
  g=0; // 1 
  f=0;
  a=0;
  b=1;
  e=0;
  d=0;
  c=1;
  h=0;
P1=0X06;

  delay();
  g=1; // 2
  f=0;
  a=1;
  b=1;
  e=1;
  d=1;
  c=0;
  h=0;

  delay();
  g=1;  // 3
  f=0;
  a=1;
  b=1;
  e=0;
  d=1;
  c=1;
  h=0;

  delay();
  g=1; // 4
  f=1;
  a=0;
  b=1;
  e=0;
  d=0;
  c=1;
  h=0;

  delay();
  g=1;  // 5
  f=1;
  a=1;
  b=0;
  e=0;
  d=1;
  c=1;
  h=0;
   
  delay();
  g=1;  // 6
  f=1;
  a=0;
  b=0;
  e=1;
  d=1;
  c=1;
  h=0;
   
  delay();
  g=0;  // 7
  f=0;
  a=1;
  b=1;
  e=0;
  d=0;
  c=1;                                   
  h=0;

  delay();
  g=1; // 8
  f=1;
  a=1;
  b=1;
  e=1;
  d=1;
  c=1;
  h=0;
  delay();
   g=1; // 9
  f=1;
  a=1;
  b=1;
  e=0;
  d=1;
  c=1;
  h=0;
  delay();
 } 
}


void delay()
{
 float a, b;
 for(b=0;b<1;b++)
 {
  for(a=0;a<5;a++)
  {
   TR0=0;
   TF0=0;
   TMOD=0x01;
   TL0=0x00;
   TH0=0x00;
   TR0=1;
   while(TF0==0);
   TR0=0;
   TF0=0;
  }
 }
}
 
