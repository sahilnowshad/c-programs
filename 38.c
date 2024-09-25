
/*Display contents of an integer array.*/
#include <stdio.h>

int main() {
	int a[ 5 ] = { 1, 2, 3, 4, 5 }, i;
	
	for ( i = 0; i <= 4; i++ ) {
		printf( "%d ", a[ i ] );
	}
	
	return 0;
}


