
/* Sort an integer array using functions and pointers. */


#include <stdio.h>
#define N 20
void sort ( int *p, int n );

int main( ) {
	int a[ N ] = { 5, 1, 3, 4, 2 }, i;
	int n = 5;
	int *p = &a[ 0 ];
	sort( p, n );
	

	for ( i = 0; i < n; i++ ) {
		printf( "%d ", a[ i ] );
	}
	
	return 0;
}

void sort ( int *p, int n ) {
	int c, i ,j;
	int *r = p;
	for ( i = 0; i < n - 1; i++ ) { // n-1 passes
        for ( j = 0; j < n - i - 1; j++ ) { // Last i elements are already sorted
            if ( *p > *( p + 1 ) ) {
                c = *p;
                *p = *( p + 1 );
                *( p + 1 ) = c;
            }
            p++;
        }
        p = r;
    }
}

