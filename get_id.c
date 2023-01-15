/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_id.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:37:54 by arforgea          #+#    #+#             */
/*   Updated: 2023/01/15 11:38:13 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "p_swap.h"

int	get_id(int nbr, int *array, int array_size)
{
	int	id;

	id = 0;
	while (id < array_size)
	{
		if (array[id] == nbr)
			return (id);
		id++;
	}
	return (-1);
}
