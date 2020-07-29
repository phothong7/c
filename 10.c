//upgrade 10
#include<stdio.h>

void function(a)
{
for(int i=1;i<=a;i++){
	int j= i*2;
		if(j%2==0){
			printf("%d\n",i*j);
		}
	}
}

void main(){
	printf("This is Program IQ Calculate number.\n\n");
	
	printf("Please enter number (>0): ");
	int in;
	scanf("%d",&in);
	function(in);
}
