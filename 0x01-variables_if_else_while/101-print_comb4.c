#include <stdio.h>
/**
 * main - all combinations of 3 digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j, k;

	i = j = k = 48;
	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			k = 48;
			while (k < 58)
			{
				if(i != j && j != k && i < j && j < k)
				{
					putchar (i);
					putchar (j);
					putchar (k);
					if (i != 55 || j != 56 || k != 57)
					{
						putchar (',');
						putchar (' ');
					}
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
