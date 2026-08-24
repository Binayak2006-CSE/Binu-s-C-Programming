#include<stdio.h>
int main()
{
	int y,m,d;
	printf("Enter the age in days:"); scanf("%d", &d);
	y=d/365, m=(d%365)/30, d=(d%365)%30;
	printf("The age of the person is: %d years %d month %d days", y, m ,d);
	return 0;
}
