#include<stdio.h>

void main()
{
	printf("This is Program IQ Calculate number.\n\n");
	
	printf("Please enter number(11-99): ");
	int a;
	scanf("%d",&a);
	
	int ab[1];
	for(int i=0;i<=strlen(a);i++){
		ab[i]=a%10;
	}
	
	for(int i=0;i<=strlen(ab);i++){
		printf("%d",ab[i]);
	}
}
