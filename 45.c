
/* Input a string from the user and display it in reverse order. */
#include <stdio.h>

#define N 100

int main() {
	char a[ N ];
	printf( "Enter string: " );
	scanf( "%s", a );
	
	int i;
	for ( i = 0; a[ i ] != '\0'; i++ ) {
		;
	}
	
	for ( --i ; i >= 0; i-- ) {
		printf( "%c", a[ i ] );
	}
	
	
	
	return 0;
}


