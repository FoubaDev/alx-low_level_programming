#include <stdio.h>

/**
 * main - Show single digit numbers
 *
 * Description: Show single digit numbers
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
