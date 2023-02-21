#include "main.h"
/**
 * main - Entry point
 * print_alphabet - Prints the alphabet and then a new line
 * Retun: Always  0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
