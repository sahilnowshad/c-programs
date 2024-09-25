
/* Display the series: 2 4 8 16 32 64 128 ....... (n terms) */
#include <stdio.h>
#include <math.h>

int main() {
	int i, n ;
	
	printf( "Enter n: " );
	scanf( "%d", &n );
	printf("2 ");
	
	for ( i = 2; i <= n; i++ ) {
		printf( "%d ", ( int ) ( pow( 2, i ) ) );
	}
	return 0;
}


