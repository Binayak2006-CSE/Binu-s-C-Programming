#include<stdio.h>
#include<math.h>
int main()
{
	float basic, hra, da, fix_allowance, Salary;
	printf("Basic="); scanf("%f", &basic);
	fix_allowance=5000;
	hra=0.10*basic;
	da=0.50*basic;
	Salary=(basic+hra+da+fix_allowance)*12;
	printf("The annual salaray of a person is:%f", Salary);
	return 0;
}
