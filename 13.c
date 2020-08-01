//upgrade13
#include<stdio.h>



int a(int aaa){
	return	aaa/2/2;
	
}

int p(int a, int aap){
	return aap/(a*a);
}

int b(int p,int p2b){
	return (p2b/p)/2;
}

void main(){
	int aaa, aap, p2b;
printf("Please enter Apple x Apple x Apple = ");scanf("%d",&aaa);
printf("Please enter Apple x Apple x Prune = ");scanf("%d",&aap);
printf("Please enter Prune x 2Bananas = ");scanf("%d",&p2b);
printf("Apple = %d\nPrune = %d\nBanana = %d\n",a(aaa), p(a(aaa),aap), b(p(a(aaa),aap),p2b));
getch();
}

