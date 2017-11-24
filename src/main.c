#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
// the dynamic dlopen and dlsym library header
#include <dlfcn.h>

int main(int argc, char * argv[])
{
	int x;
	//! \var papp- pointer to app function
	int (* papp)(int);
	//! \var plib- pointer to shareable library module 
	void * plib;
	// convert input number
	x = atoi(argv[1]);
    	plib = dlopen("./apps/test/.libs/libfoo.so", RTLD_NOW);
	// minimal error checking
        if (!plib) 
	{
               fprintf(stderr, "%s\n", dlerror());
               exit(EXIT_FAILURE);
        }
	dlerror();    /* Clear any existing error */
    	// aim the pointer to application function at the specific symbol.
	papp = (int (* )(int)) dlsym(plib,"foo_AppMain");
	// call the function by pointer with arguments
	papp( x );
	//return the success for dlclose
	dlclose(plib);

	return 0;


}
