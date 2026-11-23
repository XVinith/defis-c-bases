#include <stdio.h>

/**
 * main - programme qui affiche tous les entiers de 0 à 100 inclus.
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	int note;
	char *str = "";

	note = 14;
	if (note >= 0 && note <= 20)
	{
		if (note < 10)
			str = "À retravailler\n";
		else if (note == 10 || note == 11)
			str = "Passable\n";
		else if (note == 12 || note == 13)
			str = "Assez bien\n";
		else if (note == 14 || note == 15)
			str = "Bien\n";
		else if (note > 16)
			str = "Très bien\n";
	}
	else
		str = "Note invalide";

	printf("Note : %d\nAppréciation : %s\n", note, str);
	return (0);
}
