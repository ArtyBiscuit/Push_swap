/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:24:27 by arforgea          #+#    #+#             */
/*   Updated: 2022/12/13 20:25:28 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "p_swap.h"

static void	*skip_space(char **str)
{
	while (**str == ' ')
		(*str)++;
	return (str);
}

static int	is_num(char	*str)
{
	if (*str >= 48 && *str <= 57)
		return (1);
	return (0);
}

static int	is_negative(char *str)
{
	if ((*str - 1 == ' ' || !*str - 1) && *str == '-' && is_num(str + 1))
		return (1);
	return (0);
}

static int	check_nbr(char *str)
{
	if (!str)
		return (1);
	if (*str == '\0')
		return (0);
	skip_space(&str);
	if (*str + 1 != '-')
	{
		if (is_num(str) || is_negative(str))
			check_nbr(str + 1);
		else
			return (1);
	}
	else
		return (1);
}

int	check_input(int argc, char **argv)
{
	int	index;

	index = 1;
	if (argc < 2)
		exit_error("Error!");
	while (index != argc)
	{
		if (check_nbr(argv[index]))
			exit_error("Error!");
		index++;
	}
	return (0);
}
