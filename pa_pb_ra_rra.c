/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:38:58 by arforgea          #+#    #+#             */
/*   Updated: 2023/01/15 11:34:14 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "p_swap.h"

void	pa(t_data **a, t_data **b)
{
	t_data	*tmp_b;

	if (*b == NULL)
		return ;
	tmp_b = *b;
	if ((*b)->next)
		tmp_b->next->back = NULL;
	*b = tmp_b->next;
	tmp_b->next = *a;
	if (*a)
		(*a)->back = tmp_b;
	*a = tmp_b;
	write(1, "pa\n", 3);
}

void	pb(t_data **b, t_data **a, int bequiet)
{
	t_data	*tmp_a;

	if (*a == NULL)
		return ;
	tmp_a = *a;
	if ((*a)->next)
		tmp_a->next->back = NULL;
	*a = tmp_a->next;
	tmp_a->next = *b;
	if (*b)
	(*b)->back = tmp_a;
	*b = tmp_a;
	if (!bequiet)
		write(1, "pb\n", 3);
}

void	ra(t_data **a)
{
	t_data	*ass;

	ass = *a;
	while (ass->next)
		ass = ass->next;
	ass->next = *a;
	ass->next->back = ass;
	*a = (*a)->next;
	(*a)->back = NULL;
	ass->next->next = NULL;
	write(1, "ra\n", 3);
}

void	rra(t_data **a)
{
	t_data	*head;
	t_data	*ass;

	head = *a;
	ass = *a;
	while (ass->next)
		ass = ass->next;
	ass->back->next = NULL;
	ass->back = NULL;
	ass->next = head;
	head->back = ass;
	*a = ass;
	write(1, "rra\n", 4);
}
