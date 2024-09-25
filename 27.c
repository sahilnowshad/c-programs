
// Find sum of series: 1 + 1/2 + 1/4 + 1/6 + ….+ 1/n
#include <stdio.h>

int main() {
	int n;
	printf( "Enter n: " );
	scanf( "%d", &n ); 
	
	int i;
	double sum = 1;
	for ( i = 2; i <= n; i = i + 2 ) {
			sum += ( 1 / ( double )i );
	}
	
	printf( "Sum of series = %lf", sum ); 
	
	return 0;

}

