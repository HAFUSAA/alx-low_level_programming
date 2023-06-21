#include "main.h"
/**
 * _isalpha - check for lowercase or uppercase character
 * Description: check the character
 * @c: the character to be checked
 * Return: 1 for the character lowercase or uppercase or 0 for anything else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
