#include<stdio.h>
#include<math.h>
int main()
{
	float no1,no2,no3;
	printf("Enter 3 numbers:");
	scanf("%f %f %f", &no1, &no2, &no3);
	if(no1>=no2){
		if(no1>=no3)
		{printf("%.2f is the greatest number.\n", no1);}
		else{printf("%.2f is the greatest number.\n", no3);}
	}
	else{if(no2>=no3){
		printf("%.2f is the greatest number.\n", no2);}
		else{printf("%.2f is the greatest number .\n", no3);}
	}return 0;
}
	
	
	
	
	

