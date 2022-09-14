#include "main.h"
#include <ctype.h>

/**
 *_isalpha- entry point
 * @c: the integer value it receives
 * Description:function that  checks for alphabetic character
 * isalpha(): checks for alphabetic character
 * Return: 1 if c is letter, lowercase or uppercase
 * 0 if otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
		return (0);
}

