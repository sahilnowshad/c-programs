//read two numbers from keyboard and compare them 
#include<stdio.h>
int main(){
	int i;
	int j;
	printf("enter the two numbers and then compare them");
	scanf("%d%d",&i,&j);
	if(i>j){
		printf("%d is bigger then %d",i,j);
	}
	else if(i==j){
		printf("%d is equal %d",i,j);
	}
	else{
		printf("%d is less then %d",i,j);
	}
	return 0;
}
