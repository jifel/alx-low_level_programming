#include "main.h"
/**
 * leet - encodes a string to 1337
 * @s: the sting to be encoded
 * Return: a pointer to the encoded string
 */
char *leet(char *s)
{
	int i = 0, index;

	char code[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[i])
	{
		for (index = 0; index <= 7; index++)
		{
			if (s[i] == code[index] ||
			    s[i] - 32 == code[index])
				s[i] = index + '0';
		}

		i++;
	}

	return (s);
}
