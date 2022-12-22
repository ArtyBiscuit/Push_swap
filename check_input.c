/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:51:10 by arforgea          #+#    #+#             */
/*   Updated: 2022/12/22 18:50:41 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "p_swap.h"

int	is_min_int(char *nbr)
{
	char	min[11] = "-2147483649";
	int		nbr_size;
	int		index;

	index = 0;
	nbr_size = ft_strlen(nbr);
	if (nbr_size < 11)
		return (0);
	if (nbr_size > 11)
		return (1);
	while (nbr[index])
	{
		if (nbr[index] < min[index])
			return (0);
		if (nbr[index] > min[index])
			return (1);
		index++;
	}
	return (1);
}

int skip_zero(char *nbr)
{
	if (*nbr == '-' || *nbr == '+')
	while (*nbr + index == '0')
		*nbr++;
}

int	is_max_int(char *nbr)
{
	char	max[10] = "2147483648";
	int		nbr_size;
	int		index;

	index = 0;
	if (nbr[index] == '+')
		*nbr++;
	nbr_size = ft_strlen(nbr);
	if (nbr_size < 10)
		return (0);
	if (nbr_size > 10)
		return (1);
	while (nbr[index])
	{
		if (nbr[index] < max[index])
			return (0);
		if (nbr[index] > max[index])
			return (1);
		index++;
	}
	return (1);
}

int	check_int_size(char *nbr)
{
	if (!nbr)
		return (1);
	if (nbr[0] == '-')
	{
		if (is_min_int(nbr))
			return (1);
	}
	else if (is_max_int(nbr))
		return (1);
	return (0);
}

int	check_nbr(char *nbr)
{
	int	index;

	index = 0;
	if (!nbr)
		return (1);
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
	int	i;

	input = get_input(argv, argc);
	if (input == NULL)
	{
		printf("Error!\n");
		return (1);
	}
	i = 0;
	while(i < input->tab_size)
	{
		if(check_int_size(input->data[i]) || check_nbr(input->data[i]))
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
