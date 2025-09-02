#include<stdio.h>
int main()
{
	int x;
	
	scanf("%d",&x);
	int fact = 1;
	
	int i = 2;
	for (i=2; i<=x; i++) {
		fact *= i;
	} 
	printf("%d!=%d\n",x,fact);
	
	return 0;
 } 
