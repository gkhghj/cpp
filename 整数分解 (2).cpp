#include<stdio.h>
int main()
{
	int mask = 10000;
	int x;
	scanf("%d",&x);
	do{
		int d = x / mask;
		printf("%d",d);
		x %= mask;
		mask %= 10;
		
	}while (x>0);
	
	printf("\n");
	return 0;
	 
}
