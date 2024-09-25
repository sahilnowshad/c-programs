//find factors of natural number
#include<stdio.h>
int main(){
	int i,n;
	printf("enter n");
	scanf("%d",&n);
	  for(i=2;i<=n/2;i++){
	  	if(n%i==0){
	  		printf("%d\t",i);
		  }
	  }
}
