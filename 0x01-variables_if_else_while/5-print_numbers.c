#include <stdio.h>

/**
 * main - show just one digit numbers
 *
 * Description: show just digit numbers
 *
 * Return: Return 0 (Success)
 */

int main(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	putchar(10);

	return (0);
}
