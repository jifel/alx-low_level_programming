#include "main.h"
/**
 * swap_int - function that swaps two integers
 * @a:parameter that points to int value
 * @b: parameter that points to int value
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
