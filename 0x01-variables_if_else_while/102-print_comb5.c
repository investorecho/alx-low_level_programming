#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int p;
	int l;
	int h;

	for (p = 0 ; p < 10 ; p++)
	{
		for (l = 1 ; l < 10 ; l++)
		{
			for (h = 2 ; h < 10 ; h++)
			{
				if (p < l && l < h)
				{
					putchar(p + '0');
					putchar(l + '0');
					putchar(h + '0');
					if (p + l + h != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
