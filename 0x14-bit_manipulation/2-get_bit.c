#include "main.h"

/**
 * get_bit - Function that returns the value of a bit at a given index
 *
 * @n: The number
 * @index: The index of the nit to be returned
 *
 * Return: The bit value at index index (Success), -1 (Failure)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
		return (-1);
	return (bit & 1);
}
