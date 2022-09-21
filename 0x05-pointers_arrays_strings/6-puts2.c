#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str : parameter it receives
 * Return: 0
 */
void puts2(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (i == 0)
		{
			_putchar(str[i]);
		}

		while (i % 2 == 0)
		{
			_putchar(str[i]);
		}


	}
	_putchar('\n');
}
