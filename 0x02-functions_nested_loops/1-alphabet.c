#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 97; alpha < 123; alpha++)
		_putchar(alpha);

	_putchar('\n');
}
