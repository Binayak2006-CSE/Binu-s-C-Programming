#include <stdio.h>
int main() {
    int n, orig, rev = 0, rem;
    printf("Enter an integer: ");
    scanf("%d", &n);
    orig = n;
    while (n > 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    if (orig == rev && orig >= 0) {
        printf("%d is a palindrome number.\n", orig);
    } else {
        printf("%d is not a palindrome number.\n", orig);
    }
    return 0;
}
