#include<stdio.h>
int main()
{
	int h,m,s;
	printf("Enter time in seconds:"); scanf("%d", &s);
	h=s/3600, m=(s%3600)/60, s=(s%3600)%60;
	printf("Time in hours minutes and seconds is: %dhours %dminutes %dseconds", h,m,s);
	return 0;
}
