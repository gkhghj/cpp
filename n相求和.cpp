#include<stdio.h>
int main()
{
	int n;
	double dividend,divisor;
	scanf("%d",&n);
	int i,t;
	double sum = 0.0;
	dividend = 1;
	divisor = 2;
	for(i=1;i<=n; i++){
		t = divisor;
		sum += dividend/divisor;
		divisor = dividend + divisor;
		dividend = t;
	}
	printf("%.2f",sum);
	return 0;
 } 
