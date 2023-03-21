#include "main.h"
/**
 * _isalpha - Shows 1 if input is letter, otherwise 0
 * @c: Character in ASCII table
 * Return: 1 if letter, 0 if other.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
