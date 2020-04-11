#include "head.h"

int		check(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

int		main(int ac, char **av)
{
	if (ac == 4)
	{
		if (check(av[1]) == 0 && check(av[2]) == 0 && check(av[3]) == 0)
			rush(ft_atoi(av[1]), ft_atoi(av[2]), ft_atoi(av[3]));
		else
			ft_putstr("Error: received non-numeric argument or negative numbers!");
	}
	else
		ft_putstr("Error: More than three arguments were entered!");
}
