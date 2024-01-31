#include "main.h"
/**
 *_strlen - length of string
 *@str: string
 *
 *Return: returns string length
 */
size_t _strlen(const char *str)
{
	const char *s = str;

	while (*s != '\0')
	{
		s++;
	}

	return (s - str);
}
