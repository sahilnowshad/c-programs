
/*
Store details of a student in a structure and then display the same.
 */


#include <stdio.h>
#define MAX 100


struct details {
	int roll;
	char name[ MAX ];
	char grade;
};

int main() {
	struct details d;
	
	printf( "Enter Roll No.: " );
	scanf( "%d", &d.roll );
	printf( "Enter Name: " );
	scanf( "%s", &d.name ); // Remove & to get rid of warning
	printf( "Enter Grade: " );
	scanf( " %c", &d.grade );
	printf ( "Roll No.: %d | Name: %s | Grade: %c", d.roll, d.name, d.grade );
	return 0;
}

