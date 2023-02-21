#include "main.h"
/**
 * main - Entry point
 * printf - Prints the alphabet and then a new line
 * Retun: Always  0
 */
int print_alphabet()
{
	char c = 'z';
	while(c < 'z')
	{
	        _putchar(c);
		c++;
	}
	_putchar('\n');
	return (0);
}
