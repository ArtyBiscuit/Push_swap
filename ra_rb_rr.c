/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:29:31 by arforgea          #+#    #+#             */
/*   Updated: 2023/01/11 18:02:44 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "p_swap.h"

void	ra(t_data **a)
{
	t_data *head;
	t_data *ass;

	head = *a;
	while((*a)->next)
		*a = (*a)->next;
	ass = *a;
	ass->next = head;
	*a = head->next;
	head->next->back = NULL;
	head->next = NULL;
	write(1, "ra\n", 3);
}

void	rb(t_data **b)
{
	t_data *head;
	t_data *ass;

	head = *b;
	while((*b)->next)
		*b = (*b)->next;
	ass = *b;
	ass->next = head;
	*b = head->next;
	head->next->back = NULL;
	head->next = NULL;
	write(1, "rb\n", 3);
}

void	rr(t_data **a, t_data **b)
{
	ra(a);
	rb(b);
	write(1, "rr\n", 3);
}
