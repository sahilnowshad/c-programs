
/*Display contents of a string in reverse order using pointers.*/
#include <stdio.h>

#define N 100

int main() {
	char a[ N ], *p, *q;
	
	printf( "Enter string to reverse: " );
	scanf( "%s", a );
	p = &a[ 0 ];
	
	q = p;

	printf( "Reversed: " );

	while ( *p != '\0' ) {
		p++;
	}
	p--;
	while ( p >= q ) {
		printf( "%c", *p );
		p--;
	}
	return 0;
}

