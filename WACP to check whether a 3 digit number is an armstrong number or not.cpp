#include <stdio.h>
#include <math.h>

int main() {
    int n, orig, sum = 0, rem, i=0;
    printf("Enter a 3-digit integer: ");
    scanf("%d", &n);
    orig = n;
    while (n > 0) {
        rem = n % 10;      
        sum += rem*rem*rem;  
        n /= 10;                 
    }
    if (orig == sum) {
        printf("%d is an Armstrong number.\n", orig);
    } else {
        printf("%d is not an Armstrong number.\n", orig);
    }
    return 0;
}

