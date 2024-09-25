// Display the Fibonacci series: 0 1 1 2 3 5 8 13 21 ....... (n terms)
#include <stdio.h>

int main() {
	
	int a, b, c = 0, n, i;
	
	a = 0;
	b = 1;
	
	printf( "Enter n: " );
	scanf( "%d", &n );
	
	for ( i = 0; i <= n; i++ ) {
		printf( "%d ", c );
		c = a + b;
		a = b;
		b = c;
		
	}
	
	return 0;

}
