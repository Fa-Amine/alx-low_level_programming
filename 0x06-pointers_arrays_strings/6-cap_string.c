#include "main.h"
#include <string.h>

/**
 * cap_string - capitalaizes strings
 *
 * @str: the string
 * Return: the string or nth
 */
char *cap_string(char *str)
{
	int i;
	int len = strlen(str);

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	for (i = 1; i < len; i++)
	{
		if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
		str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
		str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
		str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
		str[i - 1] == '}')
		{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		}
	}

return (str);
}

