
// Demonstrate use of pointers in programming.


#include <stdio.h>

int main(int argc, char **argv)
{
	int i, *p;
	p = &i;
	*p = 5; // Changing p changes i
	printf( "i = %d\n", i );
	
	printf( "*p = %d\n", *p ); // *p prints the value of i
	
//	printf( "p = %d\n", p ); // Prints address
	printf( "p = %p\n", p ); // Prints address
	return 0;
}

