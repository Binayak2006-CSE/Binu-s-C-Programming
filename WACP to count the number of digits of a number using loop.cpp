#include <stdio.h>
int main() {
    int n, i = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 0; n > 0; i++) {
        n = n / 10;
    }
    printf("The number of digits is: %d\n", i);
    return 0;
}
