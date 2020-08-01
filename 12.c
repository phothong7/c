#include <stdio.h>
void main() {
	printf("This is Program IQ Calculate number.\n");
    int a, b, n, rev = 0, remainder;
    
    printf("Please enter number1 (>0): ");scanf("%d",&a);
    printf("Please enter number2 (>0): ");scanf("%d",&b);
    n = a*b;
    
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    
    printf("%d + %d = %d", a, b, rev);
    
}
