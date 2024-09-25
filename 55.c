
/* Find product of two matrices. */
#include <stdio.h>

#define N 10

int main( void ) {
    int a[ N ][ N ], b[ N ][ N ], c[ N ][ N ], m, n, o, p, i, j, k;
    
    printf( "Enter dimensions of matrix 1 as 'm n': " );
    scanf( "%d %d", &m, &n );
    
    printf( "Enter elements of matrix 1 row-wise:\n" );
    for ( i = 0; i < m; i++ ) {
        for ( j = 0; j < n; j++ ) {
            scanf( "%d", &a[ i ][ j ] );
        }
    }
    
    printf( "Enter dimensions of matrix 2 as 'o p': " );
    scanf( "%d %d", &o, &p );
    
    if ( n != o ) {
        printf( "Matrix multiplication not possible. Number of columns in matrix 1 must equal number of rows in matrix 2.\n" );
        return 1;
    }
    
    printf( "Enter elements of matrix 2 row-wise:\n" );
    for ( i = 0; i < o; i++ ) {
        for ( j = 0; j < p; j++ ) {
            scanf( "%d", &b[ i ][ j ] );
        }
    }
    
    for ( i = 0; i < m; i++ ) {
        for ( j = 0; j < p; j++ ) {
            c[ i ][ j ] = 0;
            for ( k = 0; k < n; k++ ) {
                c[ i ][ j ] += a[ i ][ k ] * b[ k ][ j ];
            }
        }
    }
    
    printf( "Product of matrices:\n" );
    for ( i = 0; i < m; i++ ) {
        for ( j = 0; j < p; j++ ) {
            printf( " %d ", c[ i ][ j ] );
        }
        printf( "\n" );
    }
    
    return 0;
}

