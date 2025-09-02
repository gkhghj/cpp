#include<stdio.h>

int main ()
{
	int i;
	scanf("%d",&i);
	int a = i / 100;
	int b = i % 100 / 10;
	int c = i % 100 % 10;
	i = c*100 + b*10 + a;
	printf ("%d",i);
	
	return 0;
	
}
