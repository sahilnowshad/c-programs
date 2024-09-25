
/*Find sum of all elements of an integer array. */
#include <stdio.h>

#define N 20

int main() {
	int a[ N ], i, n, sum = 0;
	
	printf( "Enter no. of elements to store in the array: " );
	scanf( "%d", &n );
	
	printf( "Enter elements to store in the array and to find their sum:\n" );
	for ( i = 0; i <= n - 1; i++ ) {
		scanf( "%d", &a[ i ] );
	}
	
	for ( i = 0; i <= n - 1; i++ ) {
		sum = sum + a[ i ];
	}
	
	printf( "Sum : %d", sum );
	
	return 0;
}


