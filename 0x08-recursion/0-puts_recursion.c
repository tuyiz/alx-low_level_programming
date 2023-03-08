#include<stdio.h>
/**
 * puts - Entry point
 * @s: The string to print
 * Return : Nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	s++;
	_puts_recursion(s);
}
