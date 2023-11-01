#include <stdlib.h>
#include "main.h"
/**
 * count_word -  count the number of words in a string
 * @s: string to work on
 * Return: number of words
*/
int count_word(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;									else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}
/**
 * **strtow - splits a string into words
 * @str: string to be splitted
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
*/
char **strtow(char *str)
{
	char **grid, *tmp;
	int i, k = 0, length = 0, words, c = 0, begin, last;

	while (*(str + length))
		length++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	grid = (char **) malloc(sizeof(char *) * (words + 1));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				last = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (begin < last)
					*tmp++ = str[begin++];
				*tmp = '\0';
				grid[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			begin = i;
	}
	grid[k] = NULL;
	return (grid);
}

