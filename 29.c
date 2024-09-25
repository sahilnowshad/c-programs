
/*Check whether a number is Armstrong number or not*/
#include <stdio.h>

int main() {
	int q, r, n, og, cubeSum = 0;
	printf( "Check whether a number is Armstrong number or not: " );
	scanf( "%d", &n );
	og = n;
	
	while ( n != 0 ) {
		q = n / 10;
		r = n % 10;
		cubeSum += r * r * r;
		n = q;
	}

	if ( cubeSum == og ) {
		printf( "Number is Armstrong." );
	} else {
		printf( "Number is not Armstrong." );
	}

	return 0;
}


