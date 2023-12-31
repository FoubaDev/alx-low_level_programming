#include "main.h"
/**
 * _sqrt_recursion - Square root of n
 * @n: Entry value
 * Return: result of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);
	else
		return (factor(n, 2));
}
/**
 * factor - find sqrt root factor
 * @n: entry value
 * @a: Sqrt root
 * Return: a (Success) -1 (Not Found)
 */

int factor(int n, int a)
{
	if ((a * a) == n)
		return (a);

	if ((a * a) > n)
		return (-1);

	else
		return (factor(n, a + 1));
}
