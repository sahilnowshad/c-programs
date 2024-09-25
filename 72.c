
//Read contents of a text file.
#include <stdio.h>

int main() {
	FILE *p;
	
	p = fopen( "72.txt", "r" );
	
	char ch = getc( p );
	
	if ( p == NULL ) {
		printf( "The file does not exist." );
	} else {
		while ( ch != EOF) {
			printf( "%c", ch );
			ch = getc( p );
		}
	}
	fclose( p );
	
	return 0;
}

