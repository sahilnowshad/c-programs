//display the contents of an array in reverse order 
#include<stdio.h>
int main(){
	int a[5],i;
	printf("enter the elements of an array");
	  for(i=0;i<=4;i++){ //this loop is responsible for reading only
	  	scanf("%d",&a[i]);
	  }
	  for(i=4;i>=0;i--){ /*this loop will change bcz this loop is
	   resposible for printing*/
	  	
	  	printf("%d\t",a[i]);
	  }
}
