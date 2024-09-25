
//Write into a text file.

#include <stdio.h>

int main() {
	FILE *p;
	int roll = 28;
	char name[ 50 ] = "Amaan";
	
	p = fopen( "72.txt", "w" );
	
	fprintf( p, "%d %s", roll, name );
	
	fclose( p );
	
	return 0;
}

