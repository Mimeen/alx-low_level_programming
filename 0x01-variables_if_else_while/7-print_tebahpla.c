#include <stdio.h>

/**
 * main - Program Entry Point
 *
 * Return: Always (0) - Success
 */

int main(void)
{
	char alpha;

	for (alpha = 122; alpha > 96; alpha--)
		putchar(alpha);

	putchar('\n');
	return (0);
}
