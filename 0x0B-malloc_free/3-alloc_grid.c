#include "main.h"
/**
 * alloc_grid - allocates a grid, make space and free space
 * @width: takes in breadth of grid
 * @height: length of grid
 * Return: grid with free spaces
*/
int **alloc_grid(int width, int height)
{

	int **matrix;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	matrix = malloc(sizeof(int *) * height);

	if (matrix == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(sizeof(int) * width);
		if (matrix[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
			{
			free(matrix[i]);
			}
														free(matrix);
		return (NULL);										}
	}
	for (i = 0; j < width; j++)
		matrix[i][j] = 0;
	return (matrix);
}

