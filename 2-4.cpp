#include<stdio.h>

int main()
{
	int i,x;
	scanf("%d",&i);
	x = i%10 + i/10*16;
	printf("%d",x);
	
	return 0;
	
}
