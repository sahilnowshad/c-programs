//check wether the no. entered is prime or not 
#include<stdio.h>
 int main(){
 	int i,n,prime=1;
 	printf("enter n");
 	  scanf("%d",&n);
 	      
 	      	for(i=2;i<=n-1;i++){
 	      		if(n%2==0){
 	      			prime=0;
				   }
			   }
		if(prime==1){
			printf("entered number is prime ");
		}
		  else{
		  	     printf("the entered number is not prime ");
		  }	 
	}
