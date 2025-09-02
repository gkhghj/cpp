#include<stdio.h> 

int main ()
{
	int a,b,c,d,k,e,f,x,y;
    scanf("%d,%d",&x,&y);                     
	a = x / 100;
	b = x % 100;
	e = y / 60;
	f = y % 60;
	c = a+e;
	d = b+f;
	k = c*100 + d;
	printf("%d",k);
  
  return 0;                                                                                                    
}
