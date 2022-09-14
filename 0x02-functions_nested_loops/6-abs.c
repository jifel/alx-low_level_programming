#include "main.h"
#include <stdlib.h>
/**
 * _abs - entry point
 * @int: accepts int value as parameter
 * Description: computes absolute value of an integer
 * Return: 0
 */
int _abs(int a)
{
	int value;

	value = abs(a);
	_putchar(value);
	return (0);
}
