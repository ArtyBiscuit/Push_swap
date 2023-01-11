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
	return (NULL);
}

t_data *lst_create(int *array)
{
	t_data	*nbr_lst;
	t_data	*tmp_lst;
	int		cmp;

	cmp = 1;
	nbr_lst = lst_link(array[cmp - 1], NULL, NULL);
	if (nbr_lst == NULL)
		return (NULL);
	tmp_lst = nbr_lst;
	while (array[cmp])
	{
		tmp_lst->next = lst_link(array[cmp], NULL, tmp_lst);
		tmp_lst = tmp_lst->next;
		cmp++;
	}
	return (nbr_lst);
}
