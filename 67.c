
/* Swap two numbers using functions (call-by-reference method). */
#include <stdio.h>
void swap( int *a, int *b );

int main() {
	int a, b;
	printf( "Enter a and b: " );
	scanf( "%d %d", &a, &b );
	
	printf( "Entered: %d %d\n", a, b );
	swap( &a, &b );
	printf( "Swapped: %d %d\n", a, b );
	return 0;
}

void swap( int *a, int *b ) {
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	
}

