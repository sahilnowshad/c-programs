
/* Sort an integer array using functions and pointers. */


#include <stdio.h>
#define N 20

int main( ) {
	int a[ N ] = { 5, 1, 3, 4, 2 }, i, c, j;
	
	int n = 5;
	for ( i = 0; i < n - 1; i++ ) { // n-1 passes
        for ( j = 0; j < n - i - 1; j++ ) { // Last i elements are already sorted
            if ( a[ j ] > a[ j + 1 ] ) {
                c = a[ j ];
                a[ j ] = a[ j + 1];
                a[ j + 1 ] = c;
            }
        }
    }

	for ( i = 0; i < n; i++ ) {
		printf( "%d ", a[ i ] );
	}
	
	return 0;
}


