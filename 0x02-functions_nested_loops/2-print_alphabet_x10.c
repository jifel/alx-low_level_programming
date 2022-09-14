#include "main.h"
/**
 * print_alphabet_x10 -entry point
 * Description: a function that prints 10 times the alphabet in lowercase
 * Return: void
 */
void print_alphabet_x10(void)
{
	int a = 0;
	int al;

	while (a < 10)
	{
		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}
		_putchar('\n');

		a++;
	}

}
