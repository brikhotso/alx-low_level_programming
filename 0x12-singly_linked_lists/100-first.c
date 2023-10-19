#include <stdio.h>

void PrintBeforeMain(void) __attribute__ ((constructor));

/**
 * PrintBeforeMain - print a string before main function
 */
void PrintBeforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
