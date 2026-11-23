#include <stdio.h>

/**
 * main - Dessiner un triangle
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	int i, j;

	for (i = 1; i <= 5; i++)
	{
		for (j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}

	return (0);
}
