//display the series n n-1 n-2 n-3...3 2 1 
#include<stdio.h>
int main(){
	int i,n;
	printf("enter the n");
	scanf("%d",&n);
	for(i<=n;i>=1;i--){
		printf("%d\t",i);
	}
}
