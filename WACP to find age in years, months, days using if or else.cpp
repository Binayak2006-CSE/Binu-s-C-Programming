#include <stdio.h>

int main() {
    int totalDays, years, months, days;
    printf("Enter total number of days: ");
    scanf("%d", &totalDays);
    if (totalDays < 0) {
        printf("Invalid input! Days cannot be negative.\n");} 
    else {
        years = totalDays / 365;
        totalDays = totalDays % 365;
        months = totalDays / 30;
        days = totalDays % 30;
        printf("\nAge Breakdown:\n");
        if (years > 0) {
            printf("%d Years ", years);}
        if (months > 0) {
            printf("%d Months ", months);}
        if (days > 0 || (years == 0 && months == 0)) {
            printf("%d Days", days);}
        printf("\n");
    }return 0;
}
