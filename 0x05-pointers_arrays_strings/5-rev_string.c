#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 *
 * @s: does sth
 */
void rev_string(char *s)
{
	int i;
	char *p =s;
	int len;

	len = strlen(s);
	for (i = len ; i > len / 2 ; i--)
	{
		char tmp = *p;
		*p = *s;
		*s = tmp;
		_putchar(s[i]);
	}
}
