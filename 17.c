/* find the product of the series 1 2 3...n*/
#include<stdio.h>
int main(){
	int i,n;
	int product;
	printf("enter n");
	  scanf("%d",&n);
	        product=1;
	          for(i=1;i<=n;i++){
	          product*=i;	  
			  }
			    printf("%d",product);
}
