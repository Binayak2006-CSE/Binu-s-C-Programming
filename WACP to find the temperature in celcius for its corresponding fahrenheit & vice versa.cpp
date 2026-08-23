#include<stdio.h>
int main()
{
	float c,C,f,F;
	F=500;
	C=((F-32)*0.55);
	printf("The value of celcius is %f", C);
	c=37.5;
	f=(0.2*((9*c)+160));
	printf("The value of fahrenheit is %f", f);
	return 0;
}
