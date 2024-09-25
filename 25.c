
// Display the series: 1 2 2 3 3 3 4 4 4 4 ....... (up to n)[nesting of loops]
#include <stdio.h>

int main() {
	int n;
	printf( "Enter n: " );
	scanf( "%d", &n ); 
	
	int i, j;
	for ( j = 1; j <= n; j++ ) {
		for ( i = 1; i <= j; i++ ) {
			printf( "%d ", j );
		}
	
	}
	
	return 0;

}

