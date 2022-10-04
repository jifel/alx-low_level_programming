#include "main.h"
/**
 * _strncpy - copies at most inputed number of bytes from string src to dest
 * @dest: the buffer storing the string copy
 * @src: the source string
 * @n: th emaximum number of bytes to be copied from src
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	for (index = 0; index <= n && src[index]; index++)
	{
		dest[index] = src[index];
	}

	dest[index] = '\0';

	return (dest);

}
