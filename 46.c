
/*Check whether a string is palindrome or not.*/
#include <stdio.h>
#include <stdbool.h>
#define N 100

int main() {
	int i, j;
	char s[ N ];
	bool palindrome = true;
	
	printf( "Enter string: " );
	scanf( "%s", s );
	
	for( j = 0; s[ j ] != '\0'; j++ ) {
		;
	}
	j--;
	
	for( i = 0;  i < j; i++, j-- ) {
		if ( s[ i ] != s[ j ] ) {
			palindrome = false;
			break;
		}
	}
	
	if ( palindrome == false ) {
		printf( "Not a palindrome!" );
	} else {
		printf( "Palindrome!" );
	}
	
	return 0;
}


