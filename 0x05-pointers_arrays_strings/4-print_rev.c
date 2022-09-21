#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: int paramter it points to
 * Return: 0
 */
void print_rev(char *s)
{
	int len, i, temp;

	len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];

		s[i] = s[len - i - 1];

		s[len - i - 1] = temp;
	}
	_putchar('\n');
}
