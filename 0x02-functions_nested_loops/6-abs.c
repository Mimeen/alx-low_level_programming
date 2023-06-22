#include "main.h"

/**
 * _abs - prints the absolute value of an integer
 *
 * @x: integer whose absolute value is to be derived
 *
 * Return: return same int if positive and the negative of int if < 0
 */

int _abs(int x)
{
	if (x >= 0)
		return (x);
	else
		return (-x);
}
