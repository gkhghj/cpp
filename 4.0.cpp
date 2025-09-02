#include<stdio.h>

int main()
{
	
	int x;
	int a;
	int b = 0;
	scanf("%d",&x);
	
	while( x>0){
		a = x%10;
		b = b*10 + a;
		printf("x=%d,a=%d,b=%d\n", x, a, b );
		x /= 10;
		
		 
	}
	printf("%d\n",b);
	
	return 0; 
}
