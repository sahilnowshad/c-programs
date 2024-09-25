#include<stdio.h>
int main(){
	int a[5],i;
	printf("enter the elements of an array");
	for(i=0;i<=4;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++){
		printf("%d\t",a[i]);
	}

}
