#include"main.h"
/**
 * print_sign checking the sign of number
 * return: 1 for positive sign, return 0 for zero and -1 for negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	_putchar(48);
	return (0);
}
