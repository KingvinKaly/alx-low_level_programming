#include "main.h"
/**
 * print_sign - Determines the sign of a number and returns the sign character.
 * @n: The integer for which to determine the sign.
 *
 * Return:
 * '+' if n is greater than zero.
 * '0' if n is zero.
 * '-' if n is less than zero.
 */
char print_sign(int n)
{
if (n > 0)
{
return ('+');
}
else if (n == 0)
{
return ('0');
}
else
{
return ('-');
}
}
