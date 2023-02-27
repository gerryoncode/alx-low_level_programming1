#include "main.h"
/**
 * _puts - function that prints a screen
 * @str: string to be printed
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}
