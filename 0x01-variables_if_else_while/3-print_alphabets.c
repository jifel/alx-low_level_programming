#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: prints alphabet in lowercase and uppercase
 * Return: Always 0 (success)
 */

int main(void)
{

	int al;

	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al);
	}
	for (al = 'A'; al <= 'Z'; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}

