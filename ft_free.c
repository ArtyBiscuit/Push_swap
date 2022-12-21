/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:36:41 by arforgea          #+#    #+#             */
/*   Updated: 2022/12/21 12:41:46 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "p_swap.h"

void	free_s_input(t_input *input)
{
	int	i;

	i = 0;
	while (i < input->tab_size)
	{
		free(input->data[i]);
		i++;
	}
	free(input->data);
	free(input);
}
