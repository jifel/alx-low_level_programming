#include "main.h"
/**
 * times_table - entry point
 * Description: functioin that prints the 9 times table, starting with 0
 * Return: void
 */
void times_table(void)
{
	int r, c, mul;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			mul = r * c;
			if (mul >= 10 && c != 9)
			{
				_putchar(mul / 10 + '0');
				_putchar(mul % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}

			if (c  != 9)
			{
				_putchar(mul + '0');
				_putchar(',');
				_putchar(' ');
			}

			else
				_putchar(mul + '0');


		}
		_putchar('\n');

	}
}
