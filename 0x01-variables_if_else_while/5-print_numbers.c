#include <stdio.h>

/**
 * main - Program Entry Point
 *
 * Return: Always (0) - Successful
 */

int main(void)
{
	int num;

	num = 0;

	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");

	return (0);
}
