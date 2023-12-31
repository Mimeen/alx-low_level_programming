#include "main.h"

/**
 * _isalpha - checks if character is an alphabet
 *
 * @c: character to be checked
 *
 * Return: return 1 if checked, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

	_putchar('\n');
}
