//upgrade 07

#include <stdio.h>

void main(){
	int a,b;
	
	printf("This is Program IQ Calculate number.\n");
	
	printf("Please enter number1(>0) = ");scanf("%d",&a);
	printf("Please enter number2(>0) = ");scanf("%d",&b);
	
	if(!(a>0 && a>b && b >0)) {
		printf("Than pon lek bor theuk tam nguean khai!!!");
		return;
	}
	
	printf("%d + %d = %d%d%d",a,b,a*b,a+b,a-b);
	getch(); //youd sua khao
}

