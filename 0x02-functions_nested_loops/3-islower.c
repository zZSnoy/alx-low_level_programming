#include "main.h"
/**
 * _islower - Shows 1 if input is lowercase, otherwise shows 0
 * @c: the character in ASCII table
 * Return: 1 if lowercase. 0 if not.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
