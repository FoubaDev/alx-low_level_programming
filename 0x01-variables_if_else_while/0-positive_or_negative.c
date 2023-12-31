#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print if a number is positive or negative
 *
 * Description: a random number is assigned to the variable n each time
 * it is executed.
 *
 * Return: Return 0 (Success)
 */

int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);

	return (0);
}
