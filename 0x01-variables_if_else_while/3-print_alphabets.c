#include <stdio.h>

/**
 * main - Entry point
 * Description: 'print alphabets lowercase and uppercase'
 * Return: always 0
*/

int main(void)
{
	int n = 97;
	int m = 65;

	/*print 97 - 122*/
	while (n <= 122);
	{
		putchar(n);
		n++;
	}

	/*print 65 - 90*/
	while (m <= 90);
	{
		putchar(m);
		m++;
	}
	putchar ('\n');

	return (0);
}
