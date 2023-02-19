#include <stdio.h>

/**
 * main - Print all possible combinations of two two-digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int j;
	int k;
	int l;

	{
		for (i = 0 ; i < 10 ; i++)
		{
			for (j = 0 ; j < 10 ; j++)
			{
				for (k = 0 ; k < 10 ; k++)
				{
					for (l = 0 ; l < 10 ; l++)
					{
						if (i < j && k < l)
						{
							putchar(i + '0');
							putchar(j + '0');
							putchar(l + '0');
							putchar(l + '0');
							putchar(',' ' ');
							putchar ( );
						}
					}
				}
			}
		}
	}
		putchar('\n');
		return (0);
}


