#include<stdio.h>
int main()
{
	int a,b;
	a=10;
	b=5;
	a=a*b;
	b=a/b;
	a=a/b;
	printf("The value of 'a' is %d ", a);
	printf("The value of 'b' is %d", b);
	return 0;
}
