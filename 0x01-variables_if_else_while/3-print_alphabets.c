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
	int j;
for (i = 97; i <= 122; i++)
{
	putchar(i);
}
for (j = 65; j <= 90; j++)
{
	putchar(j);
}
putchar('\n');
return (0);
}
