#include "main.h"
#include "main.h"
/**
 * argstostr - prints args
 * @ac: takes in breadth of grid
 * @av: length of grid
 * Return: the the items on args one on alone
*/
char *argstostr(int ac, char **av)
{
	char *string;
	int count = 0, first = 0, second = 0, third = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (first < ac)
	{
		second = 0;
		while (av[first][second] != '\0')
		{
			count++;
			second++;
		}
			first++;
		}
			count = count + ac + 1;
			string = malloc(sizeof(char) * count);
	if (string == NULL)
	{
		return (NULL);
	}
	for (first = 0; first < ac; first++)
	{
		for (second = 0; av[first][second] != '\0'; second++)
		{
			string[third] = av[first][second];
			third++;
		}
		string[third] = '\n';
		third++;
	}
	return (string);
}

