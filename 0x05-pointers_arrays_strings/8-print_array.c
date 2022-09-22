#include "main.h"
/**
 * print_array - function to print n elements of an array
 * @a: parameter it receives
 * @n: int parameter it receives
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
		{
			continue;
		}
		printf(", ");


	}
	printf("\n");
}
