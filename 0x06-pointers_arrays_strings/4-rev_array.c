#include "main.h"
/**
 * reverse_array - reverse the content of array of integers
 * @a: an array of integers
 * @n: thenumber of elements to swap
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
