/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 18:10:04 by arforgea          #+#    #+#             */
/*   Updated: 2022/12/30 17:43:08 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "p_swap.h"

#include <stdio.h>

int	check_int_size(char *nbr)
{
	char	*check;
	char	*max_int;
	char	*min_int;

	max_int = "2147483647";
	min_int = "2147483648";
	if (*nbr == '-')
		check = min_int;
	else
		check = max_int;
	printf("Debug: check_int_size -> %s\n", check);
	check = NULL;
	return (0);
}

int	check_nbr(char *nbr)
{
	int	index;

	index = 0;
	while (nbr[index])
	{
		if (nbr[index] != '-' && nbr[index] != '+' && !ft_isdigit(nbr[index]))
			return (1);
		if (nbr[index] == '-' || nbr[index] == '+')
		{
			if (!nbr[index + 1])
				return (1);
			else if (nbr[index + 1] == '-' || nbr[index + 1] == '+')
				return (1);
			else if (ft_isdigit(nbr[index - 1]))
				return (1);
		}
		index++;
	}
	return (0);
}

int	check_input(int argc, char **argv)
{
	char	*str;
	char	**f_tab;
	int		index;
	int		cmp;

	index = -1;
	cmp = 0;
	while (++cmp < argc)
		if (check_empty_arg(argv[cmp]))
			printf("Debug{001/Line->20} \"check_empty_arg\" Error\n");
	str = input_to_str(argc, argv);
	printf("STR == %s\n", str);
	f_tab = ft_split(str, ' ');
	cmp = input_size(str);
	while (++index < cmp)
	{
		if (check_nbr(f_tab[index]))
			printf("Debug{002/Line->58} \"check_nbr\" Error\n");
			//free **f_tab
		check_int_size(f_tab[index]);
	}
	index = -1;
	while (++index < cmp)
		printf("%d\n", ft_atoi(f_tab[index]));
	return (0);
}

int main(int argc, char **argv)
{
	check_input(argc, argv);
}
