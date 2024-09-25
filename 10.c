/*use nesting if else to comapaair three numbers */
#include<stdio.h>
int main(){
	int x,y,z;
	printf("enter the numbers you want to compair");
	scanf("%d %d %d",&x,&y,&z);
	if(x>y&&x>z){
		printf("%d is greater then %d and %d",x,y,z);
	}
	else if(y>x&&y>z){
		printf("%d is greater then %d and %d",y,x,z);
		
	}
	   else if(z>x&&z>y){
	  printf("%d is greater then %d and %d ",z,x,y);
	   }
	   else{
	   	prinntf("%d is equal to %d and %d",x,y,z);
	   }
	
}
