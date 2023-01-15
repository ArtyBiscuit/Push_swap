/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:03:58 by arforgea          #+#    #+#             */
/*   Updated: 2023/01/15 00:28:02 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "p_swap.h"

void	free_array(char **array)
{
	int	cmp;

	cmp = 0;
	while (array[cmp] != NULL)
	{
		free(array[cmp]);
		cmp++;
	}
	free(array);
}

void	lst_clear(t_data **lst)
{
	if (!lst || !*lst)
		return ;
	lst_clear(&((*lst)->next));
	free(*lst);
	*lst = NULL;
}
