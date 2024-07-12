#include<reg51.h>

sbit switch1 = P1^0;
sbit switch2 = P1^1;

sbit led1 = P2^4;

 void main()
 {
	 switch1=0;
	 switch2=0;

	 led1=0;

	 while(1)
	 {
		 if(switch1==1 || switch2==1)
		 {
			 led1=1;
		 }
		 else
		 {
			 led1=0;
		
		 }
	 }
 }