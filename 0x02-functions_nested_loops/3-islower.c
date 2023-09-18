#include "main.h"

/**
 * _islower- point entry
 * @c: value to check
 * Return:  1  (success) or 0 (false)
 */

int _islower(int c)
{

	if (c <= 122 && c >= 97)
	{
		return (1);
	}

	return (0);
}
