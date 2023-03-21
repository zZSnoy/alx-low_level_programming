#include "main.h"
/**
 * print_last_digit - Printing last digit of a number
 * @n: Input number
 * Return: Value of Last digit
 */
int print_last_digit(int n);
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l);
		return (-l);
	}
	else
	{
		_putchar(l);
		return (l);
	}
}
