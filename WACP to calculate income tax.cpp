#include <stdio.h>

int main() {
    float income, tax ;

    printf("Enter annual income (in Rupees): ");
    scanf("%f", &income);

    if (income <= 250000) {
        tax = 0.0;
    } 
    else if (income > 250000 && income <= 500000) {
        tax = (income - 250000) * 0.05;
    } 
    else if (income > 500000 && income <= 1000000) {
        tax = 12500 + (income - 500000) * 0.10;
    } 
    else {
        tax = 62500 + (income - 1000000) * 0.30;
    }

    printf("Total Income Tax to be paid: ?%.2f\n", tax);

    return 0;
}
