#include "main.h"

/**
 *_isalpha- check c is an alphabet
 *@c: int check
 *Return: 1 (true) 0 (false)
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	return (0);
}
