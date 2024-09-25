
//Store details of all the students of your class in an array of structure and then display the same in a tabular format.

#include <stdio.h>

#define MAX 100

struct details {
	int roll;
	char name[ MAX ];
	char grade;
};

int main() {
	struct details d[ MAX ];
	int i, n;
	
	printf( "Enter total no. of students: " );
	scanf( "%d", &n );
	
	printf( "\n" );
	for ( i = 0; i < n; i++ ) {
		printf( "Enter details of student %d.\n", i + 1 );
//		printf( "Enter Roll No.: " );
//		scanf( "%d", &d[ i ].roll );
		d[ i ].roll = i + 1;
		printf( "Enter Name: " );
		scanf( "%s", &d[ i ].name ); // Remove & to get rid of warning
		printf( "Enter Grade: " );
		scanf( " %c", &d[ i ].grade );
		printf( "\n" );
	}
	
	printf( "Roll no.  Name \t Grade\n");
	printf( "-------------------------------------------------------------\n" );
	for ( i = 0; i < n; i++ ) {	
		printf ( "%d \t %s \t %c\n", d[ i ].roll, d[ i ].name, d[ i ].grade );
	}
	return 0;
}

