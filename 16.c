/* find the sum of the series 1 2 3 ...n */
#include<stdio.h>
int main(){
	int i,n;
	int sum;
	printf("enter n");
	  scanf("%d",&n);
	     sum=0;
	     for(i=1;i<=n;i++){
	     	
			 sum=sum+i;
			 
		 }
		 printf("%d\t",sum);
		 
}
