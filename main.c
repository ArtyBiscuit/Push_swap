/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:06:37 by arforgea          #+#    #+#             */
/*   Updated: 2023/01/02 20:29:43 by arforgea         ###   ########.fr       */
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
	printf("Good!");
	free_array(array);
	return (0);
}
