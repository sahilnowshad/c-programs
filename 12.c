/* print salam when user enter 1 adab when user enter 2 hello! 
when user enter 3 and incorrect option when user enter any 
other no.*/
#include<stdio.h>
int main(){
	int number;
	printf("enter the number ");
	scanf("%d",&number);
	switch(number){
		case 1:
			printf("salaam");
	break;
	     case 2:
	     	printf("aadab");
	     	break;
	     	  case 3:
	     	  	  printf("hello!");
	     	  	   default:
	     	  	   	printf("incorrect option");
	}
	
}
