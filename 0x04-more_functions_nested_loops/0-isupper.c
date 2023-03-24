#include "main.h"
/**
 * _isupper - Shows 1 if input is uppercase, otherwise shows 0
 * @c: the character in ASCII table
 * Return: 1 if uppercase. 0 if not.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
