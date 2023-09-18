#include <stdio.h>

/**
 * main - show all letters of the alphabet
 *
 * Description: Show all letters of the alphabet
 *
 * Return: Return 0 (Success)
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}
