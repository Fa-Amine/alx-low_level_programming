#include "main.h"
#include <string.h>

/**
 * leet - uses some code
 *
 * @str:the pointer
 * Return: modifeid string
 */
char *leet(char *str)
{
	int len = strlen(str);
	int i = 0, j = 0;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0 ;  i < len ; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
			}
		}
	}
return (str);
}

