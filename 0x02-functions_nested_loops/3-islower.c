#include "main.h"
#include <ctype.h>
/**
 * _islower - entry point
 * islower(c): checks for lowercase character
 * Description: function that checks for lowercase character
 * @c: the integer value it receives
 * Return: 1 if lowercase
 * 0 if  otherwise
 */

int _islower(int c)
{

	if (islower(c))
	{
		return (1);

	}
	else
		return (0);
}

