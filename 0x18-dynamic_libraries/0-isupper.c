#include "main.h"

/**
 * _isupper - checks if parameter is uppercase character.
 * @c: input character
 * Return: 1 uppercase character, 0 other case.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
