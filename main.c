/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:06:37 by arforgea          #+#    #+#             */
/*   Updated: 2023/01/03 16:08:50 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "p_swap.h"


#include <stdio.h>
int	main(int argc, char **argv)
{
	char **array;

	array = check_input(argc, argv);
	if (array == NULL)
	{
		printf("Error");
		return (1);
	}
	if (is_sort(argc, argv, array))
	{
		printf("is sort !\n");
		return (0);
	}
	printf("Good!");
	free_array(array);
	return (0);
}
