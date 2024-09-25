
// Display the series: 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 ....... (n times) [using nesting of loops]
#include <stdio.h>

int main() {
	int n;
	printf( "Enter n: " );
	scanf( "%d", &n ); 
	
	int i, j;
	for ( j = 1; j <= n; j++ ) {
		for ( i = 1; i <= 5; i++ ) {
			printf( "%d ", i );
		}
	
	}
	
	return 0;

}

