#include "main.h"

/**
 * print_alphabet - entry point
 * Description: prints alphabets in lowercase followed by newline
 * Return: void
 */
void print_alphabet(void)
{
	int al;

	for (al = 'a'; al <= 'z'; al++)
	{
		_putchar(al);
	}
	_putchar('\n');
}
