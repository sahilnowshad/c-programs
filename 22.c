
/*Display the series: 2 4 16 256 65536 ....... (n terms)*/
#include <stdio.h>
#include <math.h>

int main() {
	int i, n;
	long long int x = 2;
	
	printf( "Enter n: " );
	scanf( "%d", &n );
	
	for ( i = 1; i <= n;  i++) {
		printf( "%lld ", x );
		x *= x;
	}
	return 0;
}


