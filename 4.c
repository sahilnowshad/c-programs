//swap two numbers
#include<stdio.h>
int main(){
	int a,b;
	printf("enter the two numbers");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d%d\t",a,b);
	return 0;
}
