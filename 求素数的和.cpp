//#include<stdio.h>
//int main()
//{
//	int x,y;
//	int i;
//	int cut = 0;
//	int sum = 0;
//	scanf("%d %d",&x,&y);
//	for(i=x;i<=y;i++){
//		int sure = 1;
//		int k;
//		for(k=2;k<i-1;k++){
//			if(i%k == 0){
//				sure = 0;
//				break;
//			}
//			
//		}
//			if(sure){
//				sum +=i;
//				cut ++;
//		}
//		
//		
//	}
//	printf("%d %d",cut,sum);
//	return 0;
// } 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 #include<stdio.h>
 int main()
 {
 	int m,n;
 	int i;
 	int cut = 0;
 	int sum = 0;
 	scanf("%d %d",&m,&n);
 	for(i = m; i<=n; i++){
 		int k ;
 		int isprime = 1;
 		for(k = 2; k<i-1; k++){
 			if(i%k == 0){
 				isprime = 0;
 				break;
			 }
			 
			 }
			 if(isprime ){
			 	cut ++;
			 	sum +=i;
		 }
		
	 }
	 printf("%d %d",cut,sum);
		 return 0;
 }
