
//Add and subtract two integers using functions (a+b, a-b, b-a)
	
#include <stdio.h>
int add( int a, int b );
int sub( int a, int b );

int main() {
	int a, b;
	
	printf( " Enter two numbers: " );
	scanf( "%d %d", &a, &b );
	
	printf( "Entered : %d %d \n", a, b );
	
	printf( "%d + %d = %d \n", a, b, add( a, b ) );
	printf( "%d - %d = %d \n", a, b, sub( a, b ) );
	printf( "%d - %d = %d \n", b, a, sub( b, a ) );

	return 0;
}

int add( int a, int b ) {
	return a + b;
}

int sub( int a, int b ) {
	return a - b;
}

