#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: the parameter it receives
 * Return: 0
 */
void rev_string(char *s)
{
	int len, i, temp;

	len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];

		s[i] = s[len - i - 1];

		s[len - i - 1] = temp;
	}
}
