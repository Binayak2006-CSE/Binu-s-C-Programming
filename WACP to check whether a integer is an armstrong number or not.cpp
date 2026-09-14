#include <stdio.h>
#include <math.h>

int main() {
    int n, orig, sum = 0, rem, i=0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    orig = n;
	if(n==0){
		i=1;
	}else{
		if(n<0){
			n=-n;
		}while(n>0){
			n/=10;
			i++;
		}
	n=orig;	 
    while (n > 0) {
        rem = n % 10;      
        sum += pow(rem, i);  
        n /= 10;                 
    }
    if (orig == sum) {
        printf("%d is an Armstrong number.\n", orig);
    } else {
        printf("%d is not an Armstrong number.\n", orig);
    }
    return 0;
}
}
