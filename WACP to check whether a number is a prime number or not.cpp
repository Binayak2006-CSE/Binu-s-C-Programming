#include<stdio.h>
int main()
{
	int n, i;
	printf("Enter the value of n:");
	scanf("%d", &n);
	for(i=2; i<=(n-1); i++)
	{
		if(n%i==0){
			printf("It is not a prime number");
		    break;}
		else
		printf("Prime");
		break;
			
	}return 0;
}
