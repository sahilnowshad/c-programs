
/* Demonstrate the use of string library functions: strlen(), strcpy(), strrev(), strcat(), strcmp() etc. using examples. */
#include <stdio.h>
#include <string.h>

#define N 100

int main() {
	
	char s[ N ];
	printf( "Enter string: " );
	scanf( "%s", s );
	
	printf( "The length of the string is : %lld\n", strlen( s ) );
	printf( "\n" );
	char d[ N ];
	strcpy( d, s );
	printf( "String 's': %s \nCopied String 'd': %s\n", s, d );
	
	printf( "\n" );
	printf( "Reversed string: %s", strrev( s ) );
	
	printf( "\n" );
	printf ( "\nEnter two string to concatenate/join them:\n" );
	printf( "Enter string 1: " );
	scanf( "%s", s );
	printf( "Enter string 2: " );
	scanf( "%s", d );
	printf( "Concatenated string: %s", strcat( s, d ) );
	
	printf( "\n" );
	printf( "Compare: %d",  strcmp( s, d ) );
	
	
	return 0;
}


