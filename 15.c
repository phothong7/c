//upgrade15
#include<stdio.h>

int step9(int _a){
	for(int i=1;i<=_a;i++){
		printf("%d + %d = %d%d\n", i, i+1, i+1, (i+1)*9);
	}
}
void main(){
	printf("This is Program IQ Calculate number.\n");
	int a;
	printf("Please enter number (>0): "); scanf("%d",&a);
	
	if(a>0)
	printf(step9(a));
}
