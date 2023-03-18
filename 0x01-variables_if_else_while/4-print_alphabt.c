#include <stdio.h>
#include <stdlib.h>

/**
* main - print the alphabet
*
* Description: using the main function
* this program prints "the number n is positive, zero, or negative
* Return: 0
*/
int main(void)
{
	int i;
for (i = 97; i <= 122; i++)
{
	if (i == 101 || i == 113)
	{
	continue;
	}
	putchar(i);
}
putchar('\n');
return (0);
}
