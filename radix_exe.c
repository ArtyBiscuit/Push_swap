/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_exe.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 09:13:15 by arforgea          #+#    #+#             */
/*   Updated: 2023/01/15 11:43:53 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "p_swap.h"

void	for_three(t_data **a)
{
	if ((*a)->id - 1 == (*a)->next->id || (*a)->id + 2 == (*a)->next->id)
		sa(a);
	if ((*a)->id + 1 == (*a)->next->id)
		rra(a);
	else if ((*a)->id - 2 == (*a)->next->id)
		ra(a);
	return ;
}

void	for_four(t_data **a, t_data **b)
{
	while (!*b)
	{
		if ((*a)->id == 0)
			pb(b, a, 0);
		else
			ra(a);
	}
	for_three(a);
	pa(a, b);
	return ;
}

void	for_five(t_data **a, t_data **b)
{
	while (!*b || !(*b)->next)
	{
		if ((*a)->id == 0 || (*a)->id == 1)
			pb(b, a, 0);
		else
			ra(a);
	}
	for_three(a);
	if ((*b)->id == 0)
		sb(b);
	pa(a, b);
	pa(a, b);
	return ;
}
