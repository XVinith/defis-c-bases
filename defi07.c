#include <stdio.h>

/**
 * main - Rectangle et carré
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	int i, j;

	printf("Rectangle :\n");
	for (i = 1; i <= 3; i++)
	{
		for (j = 0; j < 8; j++)
			printf("*");
		printf("\n");
	}

	printf("Carré :\n");
	for (i = 1; i <= 4; i++)
	{
		for (j = 0; j < 4; j++)
			printf("*");
		printf("\n");
	}

	return (0);
}
