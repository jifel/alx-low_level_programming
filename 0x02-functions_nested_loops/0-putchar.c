#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: prints _putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c[8] = "_putchar";

	int i = 0;

	for (i = 0;  i < 8; i++)
	{
		_putchar(c[i]);
	}

	_putchar('\n');

	return (0);
}
