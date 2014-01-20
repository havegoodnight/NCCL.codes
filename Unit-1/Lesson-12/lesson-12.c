/*
 *      main.c - demo helloworld application
 *
 *	Author: li ming <limingth@akaedu.org>
 *	Date:	2007-01-01
 *	Version:  1.0
 */

#include <stdio.h>

union u_tag 
{
	unsigned char c[4];
	int i;
	double d;
} u;

#define printc( expr )	printf( #expr " = %c \n", expr )
#define printi( expr )	printf( #expr " = %d \n", expr )
#define printd( expr )	printf( #expr " = %f \n", expr )
#define printx( expr )	printf( #expr " = %x \n", expr )

int main( int argc, char * argv[] )
{
	printf( "hello, Cruel World! \n" );

	printf( "sizeof u_tag = %d \n", sizeof(u) );
	printf( "sizeof double = %d \n", sizeof(double) );

	u.c[0] = '0';

	printf( "u.c[0] = %c \n", u.c[0] );
	printi( u.c[0] );
	printi( u.c[1] );
	printi( u.c[2] );
	printi( u.c[3] );
	printi( u.i );
	printd( u.d );
	
	//u.i = 0x11223344;
	u.i = 0x87654321;
	printf( "u.c[0] = %c \n", u.c[0] );
	printx( u.c[0] );
	printx( u.c[1] );
	printx( u.c[2] );
	printx( u.c[3] );
	printx( u.i );
	printd( u.d );

	return 0;
}

