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

	_putchar(last_d);
	return (0);

}
