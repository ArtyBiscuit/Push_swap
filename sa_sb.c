/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:29:55 by arforgea          #+#    #+#             */
/*   Updated: 2023/01/15 11:14:26 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "p_swap.h"

void	sa(t_data **a)
{
	t_data	*tmp;

	if ((*a)->next == NULL)
		return ;
	else
	{
		tmp = (*a)->next;
		tmp->back = NULL;
		(*a)->next = tmp->next;
		(*a)->back = tmp;
		tmp->next = *a;
		*a = tmp;
	}
	write(1, "sa\n", 3);
	return ;
}

void	sb(t_data **b)
{
	t_data	*tmp;

	if ((*b)->next == NULL)
		return ;
	else
	{
		tmp = (*b)->next;
		tmp->back = NULL;
		(*b)->next = tmp->next;
		(*b)->back = tmp;
		tmp->next = *b;
		*b = tmp;
	}
	write(1, "sb\n", 3);
	return ;
}
