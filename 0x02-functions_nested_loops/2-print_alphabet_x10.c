#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabets 10 times
 */

void print_alphabet_x10(void)
{
	char alpha;
	int num;

	for (num = 1; num <= 10; num++)
	{
		for (alpha = 97; alpha < 123; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}
