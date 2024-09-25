
// Display table of all integers from 2 to 10
// (2x1=2, 2x2=4, ……., 10x10=100)
#include <stdio.h>

int main() {
	int i, j;
	for ( j = 2; j <= 10; j++ ) {
		for ( i = 1; i <= 10; i++ ) {
			printf( "%d x %d = %d\n", j, i, j * i );
		}
		printf( "\n" );
	
	}
	
	return 0;

}

