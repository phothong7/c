//upgrade17

#include<stdio.h>

int no45no35(){
	int a = 1;
	int count3=0, count5=0;
	while(a<101){
		int last = a%10;
		if(a==4)
			a=5;
			
		else if(last !=3 && last !=5 || a ==3){
			printf("%d\n",a);
			
		}
		if(last == 3){
			count3++;
		}
		if(last == 5){
			count5++;
		}
		a++;
	}
	printf("Amount of 3 is: %d\n",count3);
	printf("Amount of 5 is: %d\n",count5);
	printf("Amount of 3 and 5 is: %d\n",count5+count3);
}

void main(){
	no45no35();
}
