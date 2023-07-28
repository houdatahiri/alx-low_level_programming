#include <stdio.h>
void first(void) __attribute__ ((constructor));
/**
 * first - prints a sentece before the main
 * function is executed
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("Ibore my house upon my back!\n");
}
