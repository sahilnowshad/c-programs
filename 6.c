//use maths liberary
#include<stdio.h>
#include<math.h>
int main(){
	float a,square,root;
	printf("enter a number");
	scanf("%f",&a);
	square=pow(a,2);
	printf("%f\n",square);
	root=sqrt(a);
	printf("%f\n",root);
	
	return 0;
}
