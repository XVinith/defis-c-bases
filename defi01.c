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

	for (i = 0; i <= 100; i++)
		printf("%d ", i);

	return (0);
}
