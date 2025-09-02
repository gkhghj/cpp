#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int i, j, k;
	i = a;
	while(i<=a+3){
		j = a;
		while(j<=a+3){
			k = a;
			while(k<=a+3){
				if(i!=j){
					if (i!=k){
						if (j!=k){
							printf("%d",i*100+j*10+k);
						}
					}
				}
				k++; 
			}
			j++;
		}
		i++; 
	}
	return 0;
 } 
