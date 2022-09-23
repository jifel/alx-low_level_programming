#include "main.h"
#include <stdio.h>
/**
 * main - program begins here
 * Return: void
 */

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if  (i % 5 == 0)
		{
			printf("Buzz");
		}

		if (i != 100)
		{
			_putchar(' ');
		}

	}

	_putchar('\n');
	return (0);
}
