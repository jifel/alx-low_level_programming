#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: parameter 1
 * Return: always 0
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i < 98)
		{
			while (i <= 98)
			{

				printf("%d", i);
				if (i != 98)
				{
					printf(",");
				}
				n++;

			}
		}
		else if (n > 98)
		{
			while (n >= 98)
			{

				printf("%d", i);
				if (n != 98)
				{
					printf(",");
				}
				n--;
			}
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}