#include<stdio.h>
/**
 * factorial - Print the factirial of a given number
 * @n: input
 * Return: Always 0 (Success)
 */

int factorial(int n)
{
	if (n <= 1)
	{
		return (n);
	}
	putchar (n * factorial(n - 1));
	return (0);
}
