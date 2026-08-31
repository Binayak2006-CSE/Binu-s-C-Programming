#include <stdio.h>
int main() {
    int totalSeconds, hours, minutes, seconds;
    printf("Enter total number of seconds: ");
    scanf("%d", &totalSeconds);
    if (totalSeconds < 0) {
        printf("Invalid input! Seconds cannot be negative.\n");} 
    else {
        hours = totalSeconds / 3600;
        totalSeconds = totalSeconds % 3600;
        minutes = totalSeconds / 60;
        seconds = totalSeconds % 60;
        printf("\nTime Breakdown:\n");
        if (hours > 0) {
            printf("%d Hours ", hours);}
        if (minutes > 0) {
            printf("%d Minutes ", minutes);}
        if (seconds > 0 || (hours == 0 && minutes == 0)) {
            printf("%d Seconds", seconds);}
        printf("\n");
    }return 0;
}
