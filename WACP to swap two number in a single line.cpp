#include<stdio.h>
int main()
{
	int x,y,z;
	 x=5, y=6;
	 z=x,
	 x=y,
	 y=z,
	 printf("%d %d", x, y);
	 return 0;
}
