#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point in c
 *
 * Return: 0 if successful
 */

int main(void)
{
	char c = 0;
	int sum = 0;
	char last = 0;

	srand(time(0));

	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}

	last = 2772 - sum;
	putchar(last);

	return (0);
}
