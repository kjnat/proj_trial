#include <stdio.h>
/**
 * main - Function that prints all the arguments, without using ac.
 * @ac: ac is the number of items in av
 * @av: av is a NULL terminated array of strings
 * Return: 0
 */
 int main(int ac, char *av)
{
	int i;

	for (i = 0; i < ac; i++)
		printf("%s\n", av);
	return (0);
}
