#include "hello-other.h"

void hello_from_the_other_cide(){

    double sq2 = sqrt(2);                           // (1)
    
	printf("If this is a C library, sizeof('a') should be 4\n");
    printf("\nsizeof(\'a\'): %d\n\n", sizeof('a')); // (2)
    
    char c;
    void* pv = &c;
    int* pi = pv;                                   // (3)
    
    int class = 5;                                  // (4)

	printf("If this is a 32bit binary, size_t should by <= 32bits\n");
	if ((size_t)-1 > 0xffffffffUL)
	{
		printf("size_t is > 32 bits\n");
	}
	else
	{
		printf("size_t is <= 32 bits\n");
	}
	//https://stackoverflow.com/questions/14737104/what-is-the-default-c-mode-for-the-current-gcc-especially-on-ubuntu
	printf("\nIf -std=c99 is set, __STDC_VERSION__ should be 199901\n");
	#ifdef __STDC_VERSION__
		printf("__STDC_VERSION__ = %ld \n", __STDC_VERSION__);
	#endif
	#ifdef __STRICT_ANSI__
		puts("__STRICT_ANSI__");
	#endif
	printf("\nIf compiled with gcc, the EXCEPTIONS_ macro should be undefined\n");	
	printf("EXCEPTIONS_ is ");
	#ifdef EXCEPTIONS_
		printf("defined\n");	
	#else
		printf("undefined\n");
	#endif
}

int i_return_four(int input) {
	return (input == 0) ? -1 : 4;

}