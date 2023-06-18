#include <stdio.h>

/**
 * main - Program Entry Point
 *
 * Return: Always (0) - Success
 */

int main (void)
{
	int num;

	num = 0;

	while (num < 10)
	{
		putchar(num%10 + '0');
		num++;
	}
	putchar('\n');

	return (0);
}
