#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: parameter
 * @s2: parameter
 * Return: if s1 < s2, the negative difference
 *	if s1 == s2, 0
 *	if s1 > s2, the postive difference
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		break;
	}

	return (*s1 - *s2);

}
