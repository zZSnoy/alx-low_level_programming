#include "main.h"
/**
 * _isdigit - Checks if c is 0 to 9
 * Description: Checks if numbers 0 to 9
 * @c: Input number
 * Return: 1 if digit, 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar ('\n');
}
