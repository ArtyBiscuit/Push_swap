/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:06:37 by arforgea          #+#    #+#             */
/*   Updated: 2023/01/15 11:21:25 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "p_swap.h"

int	*ft_convert(int array_size, char **array)
{
	int	*new_array;
	int	cmp;

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

int	*get_input(int argc, char **argv, int input_size)
{
	char	**array;
	int		*data;

	if (argc == 1)
		return (NULL);
	array = check_input(argc, argv);
	if (array == NULL)
		return (NULL);
	data = ft_convert(input_size, array);
	free_array(array);
	return (data);
}

int	main(int argc, char **argv)
{
	t_data	*lst_a;
	t_data	*lst_b;
	char	*str;
	int		array_size;
	int		*array;

	str = input_to_str(argc, argv);
	array_size = input_size(str);
	free(str);
	array = get_input(argc, argv, array_size);
	if (array == NULL)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	is_sort(array, array_size);
	lst_a = lst_create(array, array_size);
	lst_b = NULL;
	free(array);
	sort(&lst_a, &lst_b);
	lst_clear(&lst_a);
	lst_b = NULL;
	return (0);
}
