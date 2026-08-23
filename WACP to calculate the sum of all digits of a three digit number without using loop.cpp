#include <stdio.h>
int main() 
{
    int num;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    int sum = (num / 100) + ((num / 10) % 10) + (num % 10);
    printf("Sum of digits = %d\n", sum);
    return 0;
}
