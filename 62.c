
/* Demonstrate use of macros. */
#include <stdio.h>
#define PI 3.141592653589793238462643383279502884197
#define AREA( r ) r * r * PI

int main() {
	double radius;
	
	printf( "Enter radius of circle: " );
	scanf( "%lf", &radius );
	
	printf( "Area = %lf", AREA( radius ) );
	
	return 0;
}


