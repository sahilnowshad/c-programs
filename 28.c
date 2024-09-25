
/*Display the digits of any natural number in reverse order
[Use while loop]*/
#include <stdio.h>

int main() {
	int q, r, n;
	printf( "Enter a number to reverse it: " );
	scanf( "%d", &n );
	
	while ( n != 0 ) {
		q = n / 10;
		r = n % 10;
		printf( "%d", r );
		n = q;
	}
	return 0;
}


