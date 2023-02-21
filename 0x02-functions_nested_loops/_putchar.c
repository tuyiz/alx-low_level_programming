#include<unistd.h>
/**
 * _putchar write charctor c to stdout
 * @: c charactor to print 
 * return On success 1.
 * On error -1 is  returned 
 */
 int _putchar(char c)
{
	return(write(1, &c, 1));
}
