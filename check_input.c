/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 18:10:04 by arforgea          #+#    #+#             */
/*   Updated: 2022/12/27 20:28:24 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "p_swap.h"

#include <stdio.h>
int	check_input(int argc, char **argv)
{
	char	*str;
	int		cmp;

	cmp = 0;
	while (++cmp < argc)
		if (check_empty_arg(argv[cmp]))
			printf("Debug{001/Line->20} \"check_empty_arg\" Error\n");
	str = input_to_str(argc, argv);
	printf("STR == %s\n", str);

	return (0);
}

int main(int argc, char **argv)
{
	check_input(argc, argv);
}
