#include<stdio.h>
int main()
{
	float no1,no2,no3;
	printf("Enter three numbers:");
	scanf("%f %f %f", &no1, &no2, &no3);
	if(no1>=no2 && no1>=no3){
		printf("%.2f is the greatest number.\n", no1);
	}else if(no2>=no1 &&no2>=no3){
		printf("%.2f is the greatest number.\n", no2);
	}else{printf("%.2f is the greatest number.\n", no3);
	}return 0;
}
