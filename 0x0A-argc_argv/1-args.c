#include <stdio.h>

/**
 * main - prints number of arguements passed
 * @argc: number of command line arguements
 * @argv:array of command line arguements
 *
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
