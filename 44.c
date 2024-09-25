
/*Input a string from the user and find its length (without using the string library).*/
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
	printf( "%d", i );
	
	
	
	return 0;
}


