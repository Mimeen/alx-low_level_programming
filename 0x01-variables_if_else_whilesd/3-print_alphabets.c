#include <stdio.h>

/**
 * main - Program Entry Point
 *
 * Return: Always (0) - Success
 */
int main (void)
{
	char small_alpha;
	char cap_alpha;

	for (small_alpha = 97; small_alpha <= 122; small_alpha++)
		putchar(small_alpha);
	for (cap_alpha = 65; cap_alpha <= 90; cap_alpha++)
		putchar(cap_alpha);
	putchar('\n');

	return (0);
}
