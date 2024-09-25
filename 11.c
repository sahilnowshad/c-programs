/* use if else with relational logical operaters(grading acc to 
percentage of student*/
#include<stdio.h>
int main(){
	float total_marks,marks,percentage;
	printf("enter the marks ");
	scanf("%f",&marks);
	printf("enter total marks");
	scanf("%f",&total_marks);
	percentage=(marks/total_marks)*100;
	if(percentage>=90){
		printf("you have got a+ grade");
	}
	  else if(percentage>=80){
	  	printf("you have got a grade");
	  }
	  else if(percentage>=70){
	  
	  	printf("you got b grade");
	  }
	    else if(percentage>=60){
	    	printf("you got graade c");
		}
		  else if(percentage>=50){
		  	printf("you got grade d");
		  	
		  }
		  else if(percentage>=40){
		  	printf("you got grade e");
		  	
		  }
		  else{
		  	printf("fail");
		  }
}
