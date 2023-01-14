/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 18:10:04 by arforgea          #+#    #+#             */
/*   Updated: 2023/01/08 17:12:53 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "p_swap.h"

int	check_int_size(char *nbr)
{
	int	error;

	error = 0;
	ft_atoll(nbr, &error);
	if (error == 1)
		return (error);
	else
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

int check_double_int(char **array, int array_size)
{
	int	i;
	int	j;

	i = 0;
	while(i < array_size)
	{
		j = i + 1;
		while(j < array_size)
		{
			if (ft_atoi(array[i]) == ft_atoi(array[j]))
			{
				free_array(array);
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	is_sort(int *array, int array_size)
{
	int	i;
	int	j;

	i = 0;
	while(i < array_size)
	{
		j = i + 1;
		while (j < array_size)
		{
			if (array[i] > array[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char	**check_input(int argc, char **argv)
{
	char	*str;
	char	**f_tab;
	int		index;
	int		cmp;

	index = -1;
	cmp = 0;
	while (++cmp < argc)
		if (check_empty_arg(argv[cmp]))
			return(NULL);
	str = input_to_str(argc, argv);
	f_tab = ft_split(str, ' ');
	cmp = input_size(str);
	free(str);
	if (check_double_int(f_tab, cmp))
		return (NULL);
	while (++index < cmp)
	{
		if (check_nbr(f_tab[index]) || check_int_size(f_tab[index]))
		{
			free_array(f_tab);
			return (NULL);
		}
	}
	return (f_tab);
}
