#include<stdio.h>
/**
 * _pow_recursion - Print the powed value of x by y
 * @x: input
 * @y: input
 * Return: Powered value of x
 */

int _pow_recursion(int x, int y)
{
	long int z;

	if (y < 0)
	{
		return(-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	z = x ^ y;
	return (z);
}
