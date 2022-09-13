#include <stdio.h>
#include "main.h"
/**
 * main - Prints _putchar as a message.
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char putchar[] = "_putchar";
	int i = 0;
	
	while (putchar[i] != '\0')
	{
		_putchar(putchar[i]);
		i++;
	}
	_putchar("\n");
	return (0);
}
