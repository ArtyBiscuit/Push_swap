/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_swap.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:21:59 by arforgea          #+#    #+#             */
/*   Updated: 2023/01/08 18:08:46 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef P_SWAP_H
# define P_SWAP_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct s_data t_data;

struct	s_data
{
	int		id;
	int		data;
	t_data	*next;
	t_dada	*back;
};


long long   ft_atoll(const char *nptr, int *flag);
// get_input

t_data *lst_create(int *array);

int is_sort(int *array);
char **check_input(int argc, char **argv);
char    *input_to_str(int argc, char **argv);
int		check_empty_arg(char *arg);
int     input_size(char *str);

//	ft_free
void    free_array(char **array);
#endif
