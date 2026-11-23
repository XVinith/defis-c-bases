#include <stdio.h>

/**
 * main - Calculs sur un tableau
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	int tab[] = {4, 7, 2, 9, 3};
	int i, total;

	total = 0;
	printf("Valeurs : ");
	for (i = 0; i < (int)(sizeof(tab) / 4); i++)
	{
		printf("%d ", (int)(tab[i]));
		total += tab[i];
	}
	printf("\n");
	printf("Somme : %d\n", total);
	printf("Moyenne %.2f", (float)(total / i));
	printf("\n");

	return (0);
}
