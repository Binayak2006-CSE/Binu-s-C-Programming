#include<stdio.h>
int main()
{
	char ch;
	printf("Enter H and T for heads and tails:");
	scanf("%c", &ch);
	if(ch=='H' || ch=='h'){
		printf("Captain 1 wins ");}
	else{printf("Captain 2 wins");}
	return 0;
}
