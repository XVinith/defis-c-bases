#include <stdio.h>

/**
 * main - Compter les éléments d’un tableau
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	int tab[] = {3, 8, 1, 6, 4, 9};
	int i;

	i = 0;
	while (i <= (int)sizeof(tab))
		i++;

	printf("Le tableau contient %d éléments.\n", i / 4);
	return (0);
}
