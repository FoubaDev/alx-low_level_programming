#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocate memory
 * @b: size_t
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = NULL;
	p = malloc(b);

	if (!p)
		exit(98);

	return (p);
}
