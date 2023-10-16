#include "main.h"

/**
 *  swap_int - function name
 *  @a :this is the first paremeter
 *  @b :this is the second paremeter
 */


void swap_int(int *a, int *b)
{
int c;
	c = *a;
	*a = *b;
	*b = c;
}
