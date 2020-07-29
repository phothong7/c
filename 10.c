//upgrade 10

//i = a
//j = a*2 and mod 2 (%2) 

#include<stdio.h>

void function(int a)
{
	if(a<=0){
		return;
	}
for(int i=1;i<=a;i++){
	int j= i*2;
		if(j%2==0){
			printf("%d = %d\n",i, i*j);
		}
	}
}

void main(){
	printf("This is Program IQ Calculate number.\n\n");
	
	printf("Please enter number (>0): ");
	int in;
	scanf("%d",&in);
	function(in);
	getch();
}
