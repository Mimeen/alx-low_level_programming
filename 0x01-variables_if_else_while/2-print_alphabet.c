#include <stdio.h>

/**
 * main -  Program Entry Point
 *
 * Return: Always Zero - Success
 */

int main (void)
{
	char small_alpha;

	for (small_alpha = 97; small_alpha <= 122; small_alpha++)
		putchar(small_alpha);

	putchar('\n');

	return (0);
}
