//find the fact of the entered number 
#include<stdio.h>
int main(){
	int i,n,fact;
	fact=1;
	printf("enter n");
	scanf("%d",&n);
	     for(i=1;i<=n;i++){
	     	fact*=i;
		 }
		 printf("%d",fact);
}
