#include<stdio.h>
#include<math.h>
/**
 * _sqrt_recursion - Entry point
 * @n: Input
 * Return: Always 0 (Success)
 */

int _sqrt_recursion(int n)
{
	if (n % 2 != 0)
	{
		return (-1);
	}
	return (sqrt(n));
}
