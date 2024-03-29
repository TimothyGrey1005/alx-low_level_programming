#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - function searches string for any set of bytes
 *
 * @s:string occurence
 *
 * @accept: matches bytes, or @NULL if no such byte
 *
 * Return: pointer to byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			s++;
		}
	return (NULL);
}
