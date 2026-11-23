#include <stdio.h>

/**
 * main - programme qui affiche tous les entiers de 0 à 100 inclus.
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	int i;

	i = 0;
	while (i <= 100)
	{
		if (i % 2 == 0)
			printf("%d ", i);
		i++;
	}

	return (0);
}
