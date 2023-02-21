#include"main.h"
/**
 * _islower - checks for lowercase charactor
 * @c: charactor to be checked
 * return: 1 for _islower case return 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	return (0);
}
