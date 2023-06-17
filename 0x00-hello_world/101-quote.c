#include <stdio.h>

/**
 * main - Program ENtry Point
 *
 * Return: Always (0) - Success
 */

int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write(2, message, 54);

	return (1);
}
