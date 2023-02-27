#include"main.h"
#include<stdio.h>

/**
 * _putchar - write a charactor to stdout
 * @c: The charactor to print
 * Reaturn: On success 1 or -1 is returned on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
