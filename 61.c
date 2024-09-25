
//Display Fibonacci series up to n terms using recursion.
#include <stdio.h>

int fibonacci( int n );

int main() {
	
	int n;
	
	printf( "Enter n: " );
	scanf( "%d", &n );
	
	for ( int i = 0; i < n; i++ ) {
        printf( "%d ", fibonacci( i ) );
    }
	
	return 0;

}

int fibonacci( int n ) {
	if ( n == 0 ) {
        return 0;
    }
    else if ( n == 1 ) {
        return 1;
    }
	return fibonacci( n - 1 ) + fibonacci( n - 2 );
}

/* Non recursion
void fibonacci( int n ) {
	int i, a, b, c = 0;
	
	a = 0;
	b = 1;
		
	for ( i = 0; i <= n; i++ ) {
		printf( "%d ", c );
		c = a + b;
		a = b;
		b = c;
		
	}
}

*/

