#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main -  Program Entry Point
 *
 * Return: Always (0) - Suceess
 */

int main(void)
{
	int n;
	int rem;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	rem = n % 10;

	if ((n % 10) > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, rem);
	else if ((n % 10) == 0)
		printf("Last digit of %d is %d and is 0\n", n, rem);
	else if (((n % 10) < 6) && (rem != 0))
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, rem);

	return (0);
}
