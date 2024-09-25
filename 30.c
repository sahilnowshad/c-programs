
/*Demonstrate the use of continue and break keywords (in loops)*/
#include <stdio.h>

int main() {
	int i;
	
	for( i = 1; i <= 15; i++ ) {
		if ( i == 5 ) { // skips 5
			continue;
		}
		if ( i == 11 ) { // Limits loop to 10 instead of going to 15
			break;
		} 
		
		printf( "%d ", i );
		
	}

	return 0;
}


