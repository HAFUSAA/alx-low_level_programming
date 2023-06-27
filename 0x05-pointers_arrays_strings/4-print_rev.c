#include "main.h"

/**
 * print_rev - prints a string, in reverse
 *@s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int lonngi = 0;
	int o;

	while (*s != '\0')
	{
		lonngi++;
		s++;
	}
	s--;
	for (o = lonngi; o > 0; o--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
