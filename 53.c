
/* Find the sum of all diagonal elements of a matrix. */
#include <stdio.h>

#define N 10

int main() {
	int a[ N ][ N ], m, i, j, sum = 0; 
	
	printf( "Enter rank of matrix as 'm' (a square matrix, m x m): ");
	scanf( "%d", &m );
	
	printf( "Enter elements of matrix row-wise:\n" );
	for ( i = 0; i < m; i++ ) {
		for ( j = 0; j < m; j++ ) {
			scanf( "%d", &a[ i ][ j ] );
		}
	}
	
	printf( "Sum of diagnols: " );
	for ( i = 0; i < m; i++ ) {
		for ( j = 0; j < m; j++ ) {
			if ( i == j ) {
				sum = sum + a[ i ][ j ];
			}
		}
	}
	
	printf( "%d", sum );
	
	return 0;
}


