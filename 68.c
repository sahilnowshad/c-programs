
/* Display contents of an array using pointers. */

#include <stdio.h>

#define N 20

int main() {
	int a[ N ], n, *p;
	
	printf( "Enter no. of elements to store in array: " );
	scanf( "%d", &n );
	
	printf( "Enter elements: \n" );
	for ( p = &a[ 0 ]; p < &a[ n ]; p++ ) {
		scanf( "%d", p );
	}	

	printf( "Array contains: \n" );
	for ( p = &a[ 0 ]; p < &a[ n ]; p++ ) {
		printf( "%d ", *p );
	} 
	
	return 0;
}

