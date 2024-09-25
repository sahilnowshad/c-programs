#include<stdio.h>
int main()
{
	int i,j;
	int rows=5;
	for(i=1;i<=5;i++){
		for(j=0;j<=5-i;j++){
			printf("*");
		}
		printf("\n");
	}
}
