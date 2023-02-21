#include"main.h"
/**
 * _abs print absolute value of a number
 * return: Absolute value of a number or 0
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
