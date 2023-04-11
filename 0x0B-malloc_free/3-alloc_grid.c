#include "main.h"

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **map;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	map = malloc(sizeof(int *) * height);

	if (map == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		map[x] = malloc(sizeof(int) * width);

		if (map[x] == NULL)
		{
			for (; x >= 0; x--)
				free(map[x]);

			free(map);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			map[x][y] = 0;
	}

	return (map);
}
