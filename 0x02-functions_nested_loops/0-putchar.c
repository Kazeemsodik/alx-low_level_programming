#include <stdio.h>
#include "main.h"
/**
 * main - Prints _putchar as a message.
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char ch[8] = "_putchar";
	int i = 0;
	char c;

	while (i <= 8)
	{
		c = ch[i];
		_putchar(c);
		i++;
	}

	_putchar('\n');

	return (0);
}
