/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_swap.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:21:59 by arforgea          #+#    #+#             */
/*   Updated: 2023/01/15 11:38:32 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef P_SWAP_H
# define P_SWAP_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include "libft.h"

typedef struct s_data	t_data;
struct	s_data
{
	int		id;
	int		nbr;
	t_data	*next;
	t_data	*back;
};

//input
int		input_size(char *str);
int		is_sort(int *array, int array_size);
char	*input_to_str(int argc, char **argv);
int		check_empty_arg(char *arg);
char	**check_input(int argc, char **argv);
//lst
int		get_id(int nbr, int *array, int array_size);
t_data	*lst_create(int *array, int size);
t_data	*lst_dup(t_data *lst);
int		lst_size(t_data *lst);
//free
void	free_array(char **array);
void	lst_clear(t_data **lst);
//radix
void	radix_sort(t_data **a, t_data **b);
void	for_three(t_data **a);
void	for_four(t_data **a, t_data **b);
void	for_five(t_data **a, t_data **b);
void	sort(t_data **a, t_data **b);
//mouv
void	ra(t_data **a);
void	pa(t_data **a, t_data **b);
void	sb(t_data **b);
void	pb(t_data **b, t_data **a, int bequiet);
void	rra(t_data **a);
void	sa(t_data **a);
#endif
