#include "main.h"
/**
 * print_last_digit - entry point
 * @a: int parameter the function receives
 * Description: function prints the last digit of a number
 * Return: 0
 */
int print_last_digit(int a)
{
	int last_d;

	last_d = a % 10;

	if (a < 0)
	{
		last_d = last_d * -1;
	}
	_putchar(last_d + '0');
	return (last_d);

}
