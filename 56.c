
//Swap two numbers using functions (call-by-value method).

#include <stdio.h>
void swap( int a, int b );

int main( ) {
	int a, b;
	
	printf( " Enter two numbers: " );
	scanf( "%d %d", &a, &b );
	
	printf( "Entered : %d %d ", a, b );
	
	swap( a, b );

	return 0;
}

void swap( int a, int b ) {
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf( "Swapped : %d %d ", a, b );
}

