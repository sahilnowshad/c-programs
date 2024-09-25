
/*Search for an element in an integer array (Linear search).*/
#include <stdio.h>

#define N 20

int main() {
	int a[ N ], i, n, s, found = 0;
	
	printf( "Enter no. of elements to store in the array: " );
	scanf( "%d", &n );
	
	printf( "Enter elements to store in the array:\n" );
	for ( i = 0; i <= n - 1; i++ ) {
		scanf( "%d", &a[ i ] );
	}
	
	printf( "Enter an element to find its position: " );
	scanf( "%d", &s );
	
	for ( i = 0; i <= n - 1; i++ ) {
		if ( s == a[ i ] ) {
			printf( "Found %d at position %d.", a[ i ], i + 1 );
			found = 1;
		}
	}
	
	if ( found == 0 ) {
		printf( "Not Found!" );
	}
	
	return 0;
}


