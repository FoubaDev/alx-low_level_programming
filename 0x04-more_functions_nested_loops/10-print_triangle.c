#include "main.h"

/**
 * print_triangle - draw a triangle, followed by a new line
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int x;
	int y;


	if (size <= 0)
		_putchar('\n');

	for (x = 1 ; x <= size ; x++)
	{
		for (y = 1 ; y <= size ; y++)
		{
			if (y <= (size - x))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
