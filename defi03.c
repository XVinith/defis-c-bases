#include <stdio.h>

/**
 * main - programme qui affiche tous les entiers de 0 à 100 inclus.
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	char *voyelles = "aeiouyAEIOUY";
	char *tab = "Bonjour les amis";
	int i, j, total;

	total = 0;
	for (i = 0; tab[i]; i++)
	{
		for (j = 0; voyelles[j]; j++)
		{
			if (tab[i] == voyelles[j])
				total += 1;
		}
	}

	printf("La chaîne \"%s\" contient %d voyelles.\n", tab, total);
	return (0);
}
