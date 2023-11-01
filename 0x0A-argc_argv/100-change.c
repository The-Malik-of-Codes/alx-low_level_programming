#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the minimum number of coins
* @argc: length of argv
* @argv: number of argument
* Return: Always 0
*/
int main(int argc, char *argv[])
{

	int place, sum, _change, _aux;

	int coins[] = {25, 10, 5, 2, 1};

	place = sum = _change = _aux = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	sum = atoi(argv[1]);

	if (sum <= 0)
	{
		printf("0\n");
		return (0);

	}

	while (coins[place] != '\0')
	{
		if (sum >= coins[place])
		{
			_aux = (sum / coins[place]);
			_change += _aux;
			sum -= coins[place] * _aux;
		}
			place++;
	}
		printf("%d\n", _change);

		return (0);
}

