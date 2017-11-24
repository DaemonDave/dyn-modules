#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


static int count  =0;

int local_print( int b )
{
	count++;
	printf( "%u  + %u = %u ", b, count, (b + count)   );

} 


int foo_AppMain( int a )
{

   local_print( a );

	return a;
} 

int foo_AppClose(char * name)
{

   return count;

} 
