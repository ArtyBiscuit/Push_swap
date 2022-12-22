/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:39:53 by arforgea          #+#    #+#             */
/*   Updated: 2022/12/22 17:43:45 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_swap.h"

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

char	**split_str(char *str)
{
	char	**all_input;

	all_input = ft_split(str, ' ');
	return (all_input);
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

t_input	*get_input(int argc, char **argv)
{
	t_input	*input_data;
	char	*buff;
	int		cmp;

	cmp = 0;
	while (++cmp < argc)
		if(check_empty_arg(argv[cmp]))
			return (NULL);
	input_data = malloc(sizeof(t_input) * 1);
	if (!input_data)
		return (NULL);
	buff = input_to_str(argc, argv);
	input_data->data = split_str(buff);
	input_data->tab_size = input_size(buff);
	free(buff);
	return (input_data);
}
