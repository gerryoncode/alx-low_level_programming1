#include "main.h"
/**
 * print_alphabet_x10 - Prits 10 times the lowercae alphabet
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 1;

	while (i <= 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
