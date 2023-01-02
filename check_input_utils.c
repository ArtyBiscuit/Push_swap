/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 18:36:24 by arforgea          #+#    #+#             */
/*   Updated: 2023/01/02 18:36:36 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "p_swap.h"

int		input_size(char *str)
{
	int	cmp;
	int	index;

	cmp = 0;
	index = 0;
	while (str[index])
	{
		if (str[index] == ' ')
		{
			while (str[index] == ' ')
				index++;
			cmp++;
		}
		index++;
	}
	return (cmp);
}

char	*input_to_str(int argc, char **argv)
{
	char	*str;
	char	*buf;
	char	*tmp;
	int		cmp;

	str = NULL;
	buf = NULL;
	tmp = NULL;
	cmp = 1;
	while (cmp < argc)
	{
		buf = ft_strdup(argv[cmp]);
		tmp = ft_strjoin(buf, " ");
		free(buf);
		str = ft_secur_cat(str, tmp);
		cmp++;
	}
	return (str);
}

int	check_empty_arg(char *arg)
{
	int	index;

	index = 0;
	while (arg[index] == ' ')
		index++;
	if (arg[index] == '\0')
		return (1);
	return (0);
}
