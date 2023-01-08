/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:06:37 by arforgea          #+#    #+#             */
/*   Updated: 2023/01/08 17:19:15 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "p_swap.h"

int	*ft_convert(int argc, char **argv, char **array)
{
	int		array_size;
	char	*str;
	int		*new_array;
	int		cmp;

	str = input_to_str(argc, argv);
	array_size = input_size(str);
	new_array = malloc(sizeof(int) * array_size + 1);
	if (!new_array)
		return (NULL);
	cmp = 0;
	while (cmp < array_size)
	{
		new_array[cmp] = ft_atoi(array[cmp]);
		cmp++;
	}
	free(str);
	new_array[cmp] = '\0';
	return (new_array);
}

int *get_input(int argc, char **argv)
{
	char **array;
	int *data;

	array = check_input(argc, argv);
	if (array == NULL)
		return (NULL);
	data = ft_convert(argc, argv, array);
	free_array(array);
	return (data);
}


#include <stdio.h>
int	main(int argc, char **argv)
{
	int *test = get_input(argc, argv);
	if (test == NULL)
		return (1);
	if (is_sort(test))
		return (printf("is sort!"));
	free(test);
	return (0);
}
