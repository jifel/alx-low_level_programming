#include "main.h"
/**
 * _strncat-function that concactenated two strings
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
