
/*Check if a string is palindrome or not using pointers.*/
#include <stdio.h>
#include <stdbool.h>
#define N 100

int main() {

	char *s, a[ N ], *q;
	bool palindrome = true;
	
	printf( "Enter string: " );
	scanf( "%s", a );
	s = &a[ 0 ];
	
	q = s;
	while( *q != '\0' ) {
		q++;
	}
	q--;
	
	while ( s < q) {
		if ( *s != *q ) {
			palindrome = false;
			break;
		}
		s++;
		q--;
	}
	
	if ( palindrome == false ) {
		printf( "Not a palindrome!" );
	} else {
		printf( "Palindrome!" );
	}
	
	return 0;
}

