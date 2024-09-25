
//Implement Ackermann Function using recursion.
#include <stdio.h>

int ackermann( int m, int n );

int main() {
	
	int m, n;
	
	printf( "Enter 'm n': " );
	scanf( "%d %d", &m, &n );
	
	printf( "The answer is %d.s", ackermann( m, n ) );
	
	return 0;

}

int ackermann( int m, int n ) {
	if ( m == 0 ) {
        return n + 1;
    }
    else if ( m > 0 && n == 0 ) {
        return ackermann( m - 1, 1 );
    } else {// if ( m > 0 && n > 0) {
		return ackermann( m - 1, ackermann( m, n - 1 ) );
    }
    
    
}


