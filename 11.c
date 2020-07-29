//upgrade 11
//definition is: a*b,a*c,a*b+a*c-b

#include<stdio.h>

void main(){

	int a,b,c;

	printf("This is Program IQ Calculate number.\n\n");
	
	printf("Please enter number1 (>0): ");
	scanf("%d",&a);
	printf("Please enter number2 (>0): ");
	scanf("%d",&b);
	printf("Please enter number3 (>0): ");
	scanf("%d",&c);
	
	if(!(a>0,b>0,c>0))return;
	
	printf("%d + %d + %d = %d%d%d",a,b,c,a*b,a*c,a*b+a*c-b);
	
	getch();// youd sua khao

}





