#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: Prints thre alphabet in lower case \n
 * Return: Always 0 (success)
 */
int main(void)
{

	int al;

	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
