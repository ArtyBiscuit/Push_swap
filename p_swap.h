/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_swap.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:21:59 by arforgea          #+#    #+#             */
/*   Updated: 2023/01/11 18:06:08 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef P_SWAP_H
# define P_SWAP_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include "libft.h"

typedef struct s_data t_data;

struct	s_data
{
	int		id;
	int		nbr;
	t_data	*next;
	t_data	*back;
};


long long   ft_atoll(const char *nptr, int *flag);
// get_input

t_data	*lst_create(int *array, int array_size);
int		is_sort(int *array, int array_size);
char	**check_input(int argc, char **argv);
char    *input_to_str(int argc, char **argv);
int		check_empty_arg(char *arg);
int     input_size(char *str);

//	ft_free
void    free_array(char **array);
//mouv
void    sb(t_data **b);
void    sa(t_data **a);
void    ss(t_data **a,t_data **b);
void    pb(t_data **b, t_data **a);
void    pa(t_data **a, t_data **b);
void    ra(t_data **a);
void    rb(t_data **b);
void    rr(t_data **a, t_data **b);
void    rra(t_data **a);
void    rrb(t_data **b);
void    rrr(t_data **a, t_data **b);
//radix
void    radix_sort(t_data **a, t_data **b);
#endif
