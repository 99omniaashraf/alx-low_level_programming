#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: input1
 * @height: input2
 * Return: pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **all;
	int q, z;

	all = malloc(sizeof(*all) * height);
	if (width <= 0 || height <= 0 || all == 0)
	{
		return (NULL);
	}
	else
	{
		for (q = 0; q < height; q++)
		{
			all[q] = malloc(sizeof(**all) * width);
			if (all[q] == 0)
			{
				while (q--)
				{
					free(all[q]);
				}
				free(all);
				return (NULL);
			}
			for (z = 0; z < width; z++)
			{
				all[q][z] = 0;
			}
		}
	}
	return (all);
}
