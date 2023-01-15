/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:29:48 by arforgea          #+#    #+#             */
/*   Updated: 2023/01/15 11:30:12 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "p_swap.h"

int	get_bin(int max)
{
	int	bin;

	bin = 0;
	while (max)
	{
		max /= 2;
		bin++;
	}
	return (bin);
}

int	if_ra(t_data **a, t_data **b, int i, int j)
{
	t_data	*cpy_a;
	t_data	*cpy_b;

	cpy_a = lst_dup(*a);
	cpy_b = lst_dup(*b);
	while (j--)
	{
		if (!(cpy_a->id >> i & 1))
			pb(&cpy_b, &cpy_a, 1);
		else
		{
			lst_clear(&cpy_a);
			lst_clear(&cpy_b);
			return (1);
		}
	}
	lst_clear(&cpy_a);
	lst_clear(&cpy_b);
	return (0);
}

void	sort(t_data **a, t_data **b)
{
	int	size;

	size = lst_size(*a);
	if (size == 2)
		sa(a);
	else if (size == 3)
		for_three(a);
	else if (size == 4)
		for_four(a, b);
	else if (size == 5)
		for_five(a, b);
	else
		radix_sort(a, b);
}

void	radix_sort(t_data **a, t_data **b)
{
	int	size;
	int	bit;
	int	i;
	int	j;

	size = lst_size(*a);
	bit = get_bin(size - 1);
	i = 0;
	while (i < bit)
	{
		j = 0;
		while (j < size)
		{
			if (!if_ra(a, b, i, size - j))
				break ;
			if (!((*a)->id >> i & 1))
				pb(b, a, 0);
			else
				ra(a);
			j++;
		}
		while (*b)
			pa(a, b);
		i++;
	}
}
