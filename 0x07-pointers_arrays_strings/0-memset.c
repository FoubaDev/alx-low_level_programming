#include "main.h"

/**
 * _memset - fill n bytes memory pointed by s with b
 * @dest: pointer
 * @src: constant byte
 * @n: bytes to change
 * Return: pointer
 */

char *_memset(char *dest, char src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (dest != '\0' && i < n)
	{
		dest[i] = src;

		i++;
	}
	return (dest);
}
