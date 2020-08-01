//upgrade16
#include<stdio.h>

int notShow45(){
	int count4=0, count5=0;
	for(int i = 1;i<=100;i++){
		
		int last;
		last = i%10;
		
		if(last != 4 && last != 5 )
			printf("%d\n",i);
		if (last == 4)
			count4++;
		if (last == 5)
			count5++;
			
		
		
	}
	printf("Total ending number of 4 is: %d\n",count4);
	printf("Total ending number of 5 is: %d\n",count5);
	printf("Total ending number of 4 and 5 is: %d\n",count4+count5);
}
	
void main(){
		notShow45();
	}
