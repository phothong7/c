//upgrade 08

#include<stdio.h>

void main()
{
	printf("This is Program IQ Calculate number.\n\n");
	
	int a;
	printf("Please enter number(1-9): "); scanf("%d",&a);
	if(a<1 || a>9){
		printf("Pon lek u nok khop khet!!!");
	}
	
	int aa(int _a){
		for(int i=1;i<=_a;i++){
			printf("%d%dx%d%d=%d\n",i,i,i,i,(i+i)*(i+i));
		}
	}
	
	aa(a);
	getch();//youd sua khao
	
}
