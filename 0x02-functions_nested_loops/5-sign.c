#include "main.h"

/**
 * print_sign - priunts the sign of the integer
 *
 * @n: the integer to be checked
 *
 * Return: returns 1 if n > 0
 *		returns 0 if n = 0
 *		returns -1 if n < 0
 */

int print_sign(int n)
{
	if ((n % 10) > 0)
	{
		_putchar('+');
		return (1);
	}
	else if ((n % 10) == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
