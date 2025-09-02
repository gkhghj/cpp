#include <stdio.h>

int main()

{
	int a;
	int b;
	int x,y,z,w;
	scanf("%d %d",&a,&b);
	x = a + b;
	y = a - b;
	z = a * b;
	w = a / b;
	
	printf("%d + %d = %d\n",a,b,x);
	printf("%d - %d = %d\n",a,b,y);
	printf("%d * %d = %d\n",a,b,z);
	printf("%d / %d = %d\n",a,b,w);
	
	return 0;
 } 
