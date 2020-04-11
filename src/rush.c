#include "head.h"

void	print_rush(char *str, int x, int y)
{
	int i;
	int j;

	i = 0;
	ft_putchar(str[0]);
	if (x > 1)
	{
		while (x - 2 > i)
		{
			ft_putchar(str[1]);
			i++;
		}
		ft_putchar(str[2]);
	}
	ft_putchar('\n');
	if (y > 1)
	{
		i = 0;
		while (y - 2 > i)
		{
			ft_putchar(str[3]);
			if (x > 1)
			{
				j = 0;
				while (x - 2 > j)
				{
					ft_putchar(' ');
					j++;
				}
				ft_putchar(str[4]);
			}
			ft_putchar('\n');
			i++;
		}
		ft_putchar(str[5]);
		if (x > 1)
		{
			i = 0;
			while (x - 2 > i)
			{
				ft_putchar(str[6]);
				i++;
			}
			ft_putchar(str[7]);
		}
	}
	ft_putchar('\n');
}

void	rush(int num, int x, int y)
{
	char rush_00[] = "o-o||o-o";
	char rush_01[] = "/*\\**\\*/";
	char rush_02[] = "ABABBCBC";
	char rush_03[] = "ABCBBABC";
	char rush_04[] = "ABCBBCBA";

	if (num == 0 && x > 0 && y > 0)
		print_rush(rush_00, x, y);
	else if (num == 1 && x > 0 && y > 0)
		print_rush(rush_01, x, y);
	else if (num == 2 && x > 0 && y > 0)
		print_rush(rush_02, x, y);
	else if (num == 3 && x > 0 && y > 0)
		print_rush(rush_03, x, y);
	else if (num == 4 && x > 0 && y > 0)
		print_rush(rush_04, x, y);
	else
		ft_putstr("Error: There is no rush under this number or size less than zero!");

}