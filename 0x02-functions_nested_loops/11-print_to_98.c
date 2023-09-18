#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - entry point
 *@n: value to check
 * Return: Always n++ value.
 */


void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("98\n");
}
