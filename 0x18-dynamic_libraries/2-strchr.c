#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates character in string
 *
 * @c: character occurance
 *
 * @s: string
 *
 * Return: pointer to first occurrence of character
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
