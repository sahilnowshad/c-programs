
/*Input a matrix from the user and display it.*/
#include <stdio.h>

#define N 10

int main() {
	int a[ N ][ N ], m, n, i, j; 
	
	printf( "Enter rank of matrix as 'm n': ");
	scanf( "%d %d", &m, &n );
	
	printf( "Enter elements of matrix row-wise:\n" );
	for ( i = 0; i < m; i++ ) {
		for ( j = 0; j < n; j++ ) {
			scanf( "%d", &a[ i ][ j ] );
		}
	}
	
	printf( "Entered matrix:\n" );
	for ( i = 0; i < m; i++ ) {
		for ( j = 0; j < n; j++ ) {
			printf( "%d ", a[ i ][ j ] );
		}
		printf( "\n" );
	}
	
	return 0;
}


