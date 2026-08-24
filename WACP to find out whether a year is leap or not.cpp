#include<stdio.h>
int main()
{
	int x;
	printf("Enter the year:"); scanf("%d", &x);
	x%4==0? printf("Leap"): printf("Not leap");
	return 0;
}
