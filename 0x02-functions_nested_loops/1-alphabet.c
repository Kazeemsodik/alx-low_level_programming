#include "main.h"

/**
  print_alphabe  - Ent   point
 + Description: a function that prints the alphabet,
 * in lowecase followed by a new line
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	
	_putchar('\n');
}
