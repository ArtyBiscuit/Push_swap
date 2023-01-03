/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_swap.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:21:59 by arforgea          #+#    #+#             */
/*   Updated: 2023/01/02 20:27:39 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef P_SWAP_H
# define P_SWAP_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct s_input t_input;

struct	s_input
{
	char	**data;
	int		tab_size;
};


long long   ft_atoll(const char *nptr, int *flag);
// get_input
t_input	*get_input(int argc, char **argv);

int     is_sort(int argc,char **argv, char **array);
char **check_input(int argc, char **argv);
char    *input_to_str(int argc, char **argv);
int		check_empty_arg(char *arg);
int     input_size(char *str);

//	ft_free
void    free_array(char **array);
#endif
