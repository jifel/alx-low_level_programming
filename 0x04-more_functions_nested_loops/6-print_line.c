#include "main.h"
/**
 * print_line - draws a straight line
 * @n: int parameter it receives
 * Return: 0
 */
void print_line(int n)
{
	if (n > 0)
	{
		_putchar('_' * n);
		_putchar('\n');
	}
	else

		_putchar('\n');

}
