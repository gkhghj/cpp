#include<stdio.h>
int main()
{
	printf("请输入一个整数"); 
	int x;
	scanf("%d",&x);
	if(x%2 == 0){
		printf("是"); 
	}else{
		printf("否"); 
	 } 
   
	return 0;
}
