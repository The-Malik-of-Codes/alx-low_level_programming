#include "main.h"
/**
 *_strlen - count arrray
 *@s: array of elements
 *Return: item in the array
*/
int _strlen(char *s)
{
	unsigned int item;

	item = 0;
	while (s[item] != '\0')
	{
		item++;
	}

	return (item);
}
/**
 *str_concat - concatenate 2 arrays and return null as the last item
 *@s1:first array
 *@s2:second array
 *Return: Always an array pointing to anew memory
*/
char *str_concat(char *s1, char *s2)
{
	char *_dst;
	unsigned int i, j, magnitude;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	magnitude = (_strlen(s1) + _strlen(s2) + 1);

	_dst = (char *) malloc(magnitude * sizeof(char));

	if (_dst == 0)
	{
		return (NULL);
	}

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(_dst + i) = *(s1 + i);

	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(_dst + i) = *(s2 + j);
			i++;
	}
	return (_dst);
}

