#include <stdio.h>

/**
 * main - Show the letters of the alphabet
 *
 * Description: Show the letters of the alphabet in reverse
 *
 * Return: Return 0 (Success)
 */

int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar(10);

	return (0);
}
