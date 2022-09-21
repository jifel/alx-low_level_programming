#include "main.h"
/**
 * puts_half - function that prints half of the string
 * @str: the string parameter it receives
 * Return: 0
 */
void puts_half(char *str)
{
	int len, i;

	len = strlen(str);

	if (len % 2 == 1)
	{
		for (i = (len + 1) / 2; i < len; i++)
		{
			_putchar(str[i]);
		}

		_putchar('\n');
	}
	else
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}

}
