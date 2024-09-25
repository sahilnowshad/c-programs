
/*Display contents of an integer array in reverse order.*/
#include <stdio.h>

#define N 20

int main() {
	printf( "Displays contents of an integer array in reverse order.\n" );
	int a[ N ], i, n;
	
	printf( "Enter no. of elements to store in the array: " );
	scanf( "%d", &n );
	
	printf( "Enter elements to store in the array:\n" );
	for ( i = 0; i <= n - 1; i++ ) {
		scanf( "%d", &a[ i ] );
	}
	
	printf( "The array contains: " );
	for ( i--; i >= 0; i-- ) {
		printf( "%d ", a[ i ] );
	}
	
	return 0;
}


