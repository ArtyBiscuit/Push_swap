/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:06:37 by arforgea          #+#    #+#             */
/*   Updated: 2023/01/11 18:01:51 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "p_swap.h"

int	*ft_convert(int array_size, char **array)
{
	int		*new_array;
	int		cmp;

	new_array = malloc(sizeof(int) * array_size);
	if (!new_array)
		return (NULL);
	cmp = 0;
	while (cmp < array_size)
	{
		new_array[cmp] = ft_atoi(array[cmp]);
		cmp++;
	}
	return (new_array);
}

int *get_input(int argc, char **argv, int input_size)
{
	char **array;
	int *data;

	array = check_input(argc, argv);
	if (array == NULL)
		return (NULL);
	data = ft_convert(input_size, array);
	free_array(array);
	return (data);
}

#include <stdio.h>
int	main(int argc, char **argv)
{
	t_data *lst_a;
	t_data *lst_b;
	char *str = input_to_str(argc, argv);
	int array_size = input_size(input_to_str(argc, argv));
	lst_b = NULL;
	int *test = get_input(argc, argv, array_size);
	if (test == NULL)
		return (1);
	if (is_sort(test, array_size))
		return (printf("is sort!"));
	lst_a = lst_create(test, array_size);
	t_data *tmp = lst_a;
	free(test);
	radix_sort(&lst_a, &lst_b);

	(void) str;
	(void) tmp;
	return (0);
}
