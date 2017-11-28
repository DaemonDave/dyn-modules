#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

//! \var count - internal to this folder and this module
static int count = 0;

//! \fn foo_print - prints with counter
int foo_print( int b)
{
	// local variable
	int c=1;
	count++;	
	c = b + count;
    	printf("%u + %u = %u \n", count, b, ( c ));
	return count;
}

//! \fn foo_AppMain - dlopen / dlsym entry point for shared module dynamically opened by application.
int foo_AppMain( int a )
{
	return	foo_print(a);
}

//! \fn foo_AppMain - dlopen / dlsym entry point for shared module dynamically opened by application.
int foo_AppClose( int a )
{
	return	count;
}
