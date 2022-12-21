/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:51:10 by arforgea          #+#    #+#             */
/*   Updated: 2022/12/21 14:05:14 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "p_swap.h"

int	check_int(char *nbr)
{
	
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

#include <stdio.h>
int	main(int argv, char **argc)
{
	t_input	*input;
	int		i;

	input = get_input(argv, argc);
	i = 0;
	while(i < input->tab_size)
	{
		if(check_nbr(input->data[i]))
		{
			free_s_input(input);
			printf("Error!\n");
			return (1);
		}
		i++;
	}
	printf("Yes!\n");
	free_s_input(input);
	return (0);
}
