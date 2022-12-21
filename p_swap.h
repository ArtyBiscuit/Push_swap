/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_swap.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:21:59 by arforgea          #+#    #+#             */
/*   Updated: 2022/12/21 12:41:07 by arforgea         ###   ########.fr       */
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

// get_input
t_input	*get_input(int argc, char **argv);
//	ft_free
void    free_s_input(t_input *input);
#endif
