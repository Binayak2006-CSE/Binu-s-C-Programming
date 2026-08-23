#include<stdio.h>
int main()
{
	int a,b,c;
	a=10;
	b=5;
	c=a;
	a=b;
	b=c;
	printf("%d ", a);
	printf("%d", b);
	return 0;	
}
