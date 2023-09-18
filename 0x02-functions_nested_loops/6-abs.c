#include "main.h"

/**
 * _abs - entry point to determine abs of number
 * @n: The character to check
 * Return: Always 0.
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}
	else
	{
		return (n);
	}
	return (0);
}
