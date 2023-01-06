/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:29:55 by arforgea          #+#    #+#             */
/*   Updated: 2023/01/06 15:43:49 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "p_swap.h"

void	sa(int *a)
{
	int	tmp;

	if (a[0] == '\0' || a[1] == '\0')
		return ;
	tmp = a[0];
	a[0] = a[1];
	a[1] = tmp;
	write(1, "sa\n", 3);
	return ;
}

void	sb(int *b)
{
	int	tmp;

	if (b[0] == '\0' || b[1] == '\0')
		return ;
	tmp = b[0];
	b[0] = b[1];
	b[1] = tmp;
	write(1, "sb\n", 3);
	return ;
}

void	ss(int *a, int *b)
{
	sa(&a);
	sb(&b);
	write(1, "ss\n", 3);
	return ;
}
