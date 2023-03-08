#include<stdio.h>
/**
 * _print_rev_recursion - Print string in reverse
 * @s: A sreting to be reversed
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		putchar('\n');
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	putchar(*s);
}
