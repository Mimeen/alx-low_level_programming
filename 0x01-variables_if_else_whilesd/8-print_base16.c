#include <stdio.h>

/**
 * main - Program Entry Point
 *
 * Return: Always (0) - Success
 */

int main(void)
{
	int num;

	num = 0;
	
	for (num = 0; num < 10; num++)
		putchar(num%10 + '0');

	for (int alpha = 65; alpha < 71; alpha++)
		putchar(alpha);
	putchar('\n');
	
	return (0);
}
