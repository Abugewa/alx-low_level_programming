#include <stdio.h>
/**
 * main - print all possible combinatons of two 2 digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l, ij, kl;

	i = j = k = l = 48;
	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			k = 48;
			while (k < 58)
			{
				l = 48;
				while (l < 58)
				{
					ij = (i * 10) + j;
					kl = (k * 10) + l;
					if (ij < kl)
					{
						putchar (i);
						putchar (j);
						putchar (' ');
						putchar (k);
						putchar (l);
						if (i != 57 || j != 56)
						{
							putchar (',');
							putchar (' ');
						}
					}
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar ('\n');
	return (0);
}
