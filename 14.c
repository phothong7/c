//upgrade14
#include<stdio.h>

int step3(int _a){
	return _a*(_a*3);
}


void main(){
	
	printf("This is IQ Calculate number.\n");
	printf("Please enter number (>0): ");
	int a;
	scanf("%d",&a);
	if(a<1) return;
	
	printf("%d",step3(a));
	getch();
}
