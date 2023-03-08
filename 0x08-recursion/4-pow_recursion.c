#include<stdio.h>
/**
 * _pow_recursion - print the powed value of x by y
 * @x: input
 * @y: input
 * Return: Powered value of x
 */

int _pow_recursion(int x, int y)
{
	int z;

	if (y < 0)
	{
		return(0);
	}
	z = x ^ y;
	return (z);
}
