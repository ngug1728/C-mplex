#include <stdio.h>
int main() {
    int base, exp, i;
    long double result = 1.0;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);

    for (i=1;i<=exp;i++) {
	result*=base;
    }
    printf("Answer = %.0Lf", result);
    return 0;
}
  
 
