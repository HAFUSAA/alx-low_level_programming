#include "main.h"
/**
 * *_memset - entry point
 * Description: fills memory with a constant byte.
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 * Retun: pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0; itr++, n--)
	{
		s[itr] = b;
	}
	return (s);
}
