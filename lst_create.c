/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_create.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 17:19:34 by arforgea          #+#    #+#             */
/*   Updated: 2023/01/11 14:49:20 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "p_swap.h"

t_data *lst_link(int nbr, t_data *next, t_data *back, int id)
{
	t_data *nbr_link;

	nbr_link = malloc(sizeof(t_data) * 1);
	if (!nbr_link)
		return (NULL);
	nbr_link->next = next;
	nbr_link->back = back;
	nbr_link->nbr = nbr;
	nbr_link->id = id;
	return (nbr_link);
}

int	*sort_array(int *array, int array_size)
{
	int	index;
	int tmp;
	int *array_sort;

	array_sort = malloc(sizeof(int) * array_size);
	if (array_sort == NULL)
		return (NULL);
	index = -1;
	while (++index < array_size)
		array_sort[index] = array[index];
	index = 0;
	while(index < array_size)
	{
		if (array_sort[index] > array_sort[index + 1])
		{
			tmp = array_sort[index];
			array_sort[index] = array_sort[index + 1];
			array_sort[index + 1] = tmp;
			index = 0;
		}
		else
			index++;
	}
	return (array_sort);
}

int	get_id(int nbr, int *array, int array_size)
{
	int	id;

	id = 0;
	while (id < array_size)
	{
		if(array[id] == nbr)
			return (id);
		id++;
	}
	return (-1);
}

t_data *lst_create(int *array, int size)
{
	t_data	*nbr_lst;
	t_data	*tmp_lst;
	int		cmp;
	int		*array_id;
	int		id;

	cmp = 1;
	array_id = sort_array(array, size);
	id = get_id(array[cmp - 1], array_id, size);
	nbr_lst = lst_link(array[cmp - 1], NULL, NULL, id);
	if (nbr_lst == NULL)
		return (NULL);
	tmp_lst = nbr_lst;
	while (cmp < size)
	{
		id = get_id(array[cmp], array_id, size);
		tmp_lst->next = lst_link(array[cmp], NULL, tmp_lst, id);
		tmp_lst = tmp_lst->next;
		cmp++;
	}
	return (nbr_lst);
}
