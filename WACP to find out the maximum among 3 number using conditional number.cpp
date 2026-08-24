#include<stdio.h>
int main()
{
	float a,b,c,max;
	printf("a="); scanf("%f", &a);
	printf("b="); scanf("%f", &b);
	printf("c="); scanf("%f", &c);
	max=(a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
	printf("The maximum among 3 number is=%f", max);
	return 0;
}
