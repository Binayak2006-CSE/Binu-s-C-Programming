#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,e,f,g,h,i,j, Percentage1, Percentage2;
	int Roll1, Roll2;
	printf("Roll no of student 1:"); scanf("%d", &Roll1);
	printf("Enter marks for student1:-\n");
	printf("a="); scanf("%f", &a);
	printf("b="); scanf("%f", &b);
	printf("c="); scanf("%f", &c);
	printf("d="); scanf("%f", &d);
	printf("e="); scanf("%f", &e);
	Percentage1=((a+b+c+d+e)*100)/500;
	printf("Roll no of student 2:"); scanf("%d", &Roll2);
	printf("Enter marks for student2:-\n");
	printf("f="); scanf("%f", &f);
	printf("g="); scanf("%f", &g);
	printf("h="); scanf("%f", &h);
	printf("i="); scanf("%f", &i);
	printf("j="); scanf("%f", &j);
	Percentage2=((f+g+h+i+j)*100)/500;
	printf("Roll no of the highest percentage is ");
	Percentage1>Percentage2? printf("%d", Roll1):printf("%d", Roll2);
	return 0;
}
