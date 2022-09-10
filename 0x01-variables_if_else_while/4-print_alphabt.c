#include <stdio.h>
#include <unistd.h>
/**
 * main: Entry point
 * Description: printing all alphabets in lowercase except e and q
 * Return: always 0(success)
 */
int main(void)
{

	int al;

	for (al = 'a'; al <= 'z'; al++)
	{
		if (al != 'e' && al != 'q')
		{
			putchar(al);
		}
	}
	putchar('\n');
	return (0);
}
