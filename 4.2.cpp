#include<stdio.h>
int main()
{
	int x;
	int i;
	scanf("%d",&x);
	int isPrime = 1;
	for(i=2; i<x; i++){
		if (x % 10 ==0){
		 isPrime = 0;
		 break ;
	    }
	}
	if ( isPrime == 1) {
		printf("������"); 
	}else{
		printf("��������");	 
	} 
	return 0 ;
	
}
