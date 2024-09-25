
/*
Search an array using functions (passing array to a function).
 */


#include <stdio.h>

#define MAX_A 100

int search( int s, int a[], int n);

int main() {
	int a[ MAX_A ], n, i, s, x;
	
	printf( "Enter no. of elements to store in array: " );
	scanf( "%d", &n );
	printf( "Enter elements: \n" );
	for ( i = 0; i <= n - 1; i++ ) {
		scanf( "%d", &a[ i ] );
	}
	
	printf( "Enter element you want to search: " );
	scanf( "%d", &s );
	
	x = search( s, a, n );
	if ( x == 'F' ) {
		printf( "Not found." );
	} else {
		printf( "Element %d, found at %d. ", s, x + 1 );
	}
	
	return 0;
}

int search( int s, int a[], int n) {
	int i;
	for ( i = 0; i <= n - 1; i++ ) {
		if ( a[ i ] == s ) {
			return i;
		}
	}
	
	return 'F';
}


