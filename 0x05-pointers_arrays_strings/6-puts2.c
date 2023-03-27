#include "main.h"
#include <string.h>

/**
 * puts2 - show the thing and jumps one step
 *
 * @str : might use it later idk
 */
void puts2(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i <= len ; i = i + 2)
	{
		_putchar(str[i]);
	}
}
