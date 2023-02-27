#include "main.h"
/**
 * _puts - function that prints a screen
 * @str: string to be printed
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	while (*str != '\0')
	{
		_putchar(*str);
		++str;
	}
	_putchar('/n');
}
