
/*Display contents of a character array.*/
#include <stdio.h>

int main() {
	printf( "Displays contents of a character array.\n" );
	int i;
	char a[ 5 ] = { 'a', 'e', 'i', 'o', 'u' };
	
	printf( "The array contains vowels: " );
	for ( i = 0; a[ i ] != '\0'; i++ ) {
		printf( "%c ", a[ i ] );
	}
	
	return 0;
}


