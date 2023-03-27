#include "main.h"
#include <string.h>

/**
 * puts_half - types half osf
 *
 * @str : does stuff
 */
void puts_half(char *str)
{
	int i;
	int len = strlen(str);

	for (i = len / 2 ; i <= len ; i++)
	{
		if (len % 2 == 1)
		{
		for (i = (len - 1) / 2 ; i <= len ; i++)
		{
			_putchar(str[i]);
		}
		}
		else
		{
		_putchar(str[i]);
		}
		}
_putchar('\n');
}


