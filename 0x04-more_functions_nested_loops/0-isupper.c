#include "main.h"
/**
  *_isupper - Checks awhether a character is uppercasw or not
  *@c: actual character under test
  *Return: 1 if c is uppercase otherwise 0
  */
int _isupper(int c)
{
	if (c >= 65 || c <= 90)
		return (1);
	else
		return (0);
}
