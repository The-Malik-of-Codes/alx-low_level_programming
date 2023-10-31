#include "main.h"
/**
 *_strlen - count array
 *@s: array of items
 *Return: 1
*/
int _strlen(char *s)
{
	unsigned int item;

	item = 0;
	while (s[item] != '\0') /*count character of string*/
	{
		item++;
	}
	return (item);
}
/**
 *_strcpy - copied arrays
 *@src: array of items
 *@dest: dest array
 *Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int item = 0;

	while (src[item] != '\0')
	{
		dest[item] = src[item];
		item++;
	}
	dest[item] = '\0';
	return (dest);
}
/**
 *_strdup - array to print a string
 *@str: array of items
 *Return: pointer
*/
char *_strdup(char *str)
{
	char *_dst;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}

		size = _strlen(str) + 1;
		_dst = (char *) malloc(size * sizeof(char));

		if (_dst == 0)
		{
			return (NULL);
		}
		_strcpy(_dst, str);
		return (_dst);
}

