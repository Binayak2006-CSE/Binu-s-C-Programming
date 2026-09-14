#include <stdio.h>
int main() {
    int n, rev = 0, rem;
    printf("Enter an integer: ");
    scanf("%d", &n);
    int isNeg = (n < 0);
    if (isNeg) n = -n;
    while (n > 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    if (isNeg) rev = -rev;
    printf("Reversed number: %d\n", rev);
    return 0;
}
