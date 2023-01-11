/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:54:35 by arforgea          #+#    #+#             */
/*   Updated: 2023/01/11 18:05:37 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "p_swap.h"

void	rra(t_data **a)
{
	t_data *head;
	t_data *ass;

	head = *a;
	while((*a)->next)
		*a = (*a)->next;
	ass = *a;
	ass->back->next = NULL;
	ass->back = NULL;
	ass->next = head;
	head->back = ass;
	*a = ass;
	write(1, "rra\n", 4);
}

void	rrb(t_data **b)
{
	t_data *head;
	t_data *ass;

	head = *b;
	while((*b)->next)
		*b = (*b)->next;
	ass = *b;
	ass->back->next = NULL;
	ass->back = NULL;
	ass->next = head;
	head->back = ass;
	*b = ass;
	write(1, "rrb\n", 4);
}

void	rrr(t_data **a, t_data **b)
{
	rra(a);
	rrb(b);
	write(1, "rrr\n", 4);
}
