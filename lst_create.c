/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_create.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 17:19:34 by arforgea          #+#    #+#             */
/*   Updated: 2023/01/08 18:09:09 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "p_swap.h"

t_data *lst_link(int nbr, t_data *next, t_data *back)
{
	t_data *nbr_link;

	nbr_link = malloc(sizeof(t_data) * 1);
	if (!nbr_link)
		return (NULL);
	nbr_link->next = next;
	nbr_link->back = back;
	if (nbr)
	{
		nbr_link->nbr = nbr;
		return (nbr_link);
	}
	free(nbr_link);
	return (1);
}

t_data *lst_create(int *array)
{
	t_data	*nbr_lst;
	t_data	*tmp_next;
	t_data	*tmp_back;
	int		cmp;

	tmp_next = NULL;
	tmp_back = NULL;
	cmp = 0;
	while (array[cmp])
	{
		if (nbr_lst)
			nbr_lst->next = lst_link(array[cmp], tmp_next, nbr_lst);
		else
		{
			nbr_lst = lst_link(array[cmp], tmp_next, tmp_back);
			if (nbr_lst == NULL)
				return (NULL);
		}
		cmp++;
	}
	return (nbr_lst);
}
