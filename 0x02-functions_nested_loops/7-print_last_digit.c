#include "main.h"

/**
 * print_last_digit - outputs the last digit of a number
 *
 * @num: number whose last digit is to printed
 *
 * Return: returns the last digit of a number
 */

int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
