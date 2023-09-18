#include "main.h"

/**
 * print_array - entry point
 * @a: array of integers
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x < n - 1)
			printf(", ");
	}

	printf("\n");
}