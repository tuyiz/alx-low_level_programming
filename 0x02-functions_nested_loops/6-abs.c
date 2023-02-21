#include"main.h"
/**
 * _abs print absolute value of a number
 * @c: the number to be computed
 * return: Absolute value of a number or zero
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	else
	return (c);
}
