#include <stdlib.h>
#include <stdio.h>

/**
* main - print if the number is postive, zero, or negative
*
* Description: using the main function
* this program prints "the number n is positive, zero, or negative
* Return: 0
*/
int main(void)
{
	int i;
for (i = 48 ; i <= 57 ; i++)
{
	putchar(i);
	if (i == 57)
	{
		continue;
	}
	putchar(',');
	putchar(' ');
}
putchar('\n');
return (0);
}
