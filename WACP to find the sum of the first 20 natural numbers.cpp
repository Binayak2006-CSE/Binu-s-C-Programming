#include<stdio.h>
int main()
{
	int sum=0, i;
	for(int i=1; i<=20; i++){
		sum+=i;
	}
	printf("The sum of the first 20 natural numbers is:%d\n", sum);
	return 0;	
}
