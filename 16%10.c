#include<stdio.h>
int main(){
	int a;
	printf("enter the number you want to check");
	scanf("%d",&a);
	if(a%2==0){
		printf("the number entered by user is even :");
	}
	else{
		printf("the number entered by user is not even ");
	}
	return 0;
}
