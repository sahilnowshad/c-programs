
/*Find sum of two matrices.*/
#include <stdio.h>

#define N 10

int main() {
	int a[ N ][ N ], b[ N ][ N ], m, i, j; 
	
	printf( "Enter rank of matrix as 'm' (a square matrix, m x m): ");
	scanf( "%d", &m );

	printf( "Enter elements of matrix 1 row-wise:\n" );
	for ( i = 0; i < m; i++ ) {
		for ( j = 0; j < m; j++ ) {
			scanf( "%d", &a[ i ][ j ] );
		}
	}
	
	printf( "Enter elements of matrix 2 row-wise:\n" );
	for ( i = 0; i < m; i++ ) {
		for ( j = 0; j < m; j++ ) {
			scanf( "%d", &b[ i ][ j ] );
		}
	}
	
	printf( "Sum of matrices:\n" );
	for ( i = 0; i < m; i++ ) {
		for ( j = 0; j < m; j++ ) {
			printf( "%d ", a[ i ][ j ] + b[ i ][ j ] );
		}
		printf( "\n" );
	}
	
	
	return 0;
}


