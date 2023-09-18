#include "main.h"

/**
 * print_last_digit- entry point to print last digit
 * @d : the value to check
 *Return: Return l
 */

int print_last_digit(int d)
{
	int l;

	l = d % 10;
	if (d >= 0)
	{
		_putchar(l + '0');
		return (l);
	}
	else
	{
		l = l * -1;
		_putchar(l + '0');
		return (l);
	}
}
