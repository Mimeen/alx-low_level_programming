#include <stdio.h>

/**
 * main - Program Entry Point
 *
 * Return: Always (0) - Success
 */

int main(void)
{
	int num;
	int alpha;

	num = 0;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (alpha = 97; alpha < 122; alpha++)
		putchar(alpha);
	putchar('\n');

	return (0);
}
