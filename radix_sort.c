#include "p_swap.h"
#include <stdio.h>

int get_bin(int max)
{
	int bin;

	bin = 0;
	while (max)
	{
		max /= 2;
		bin++;
	}
	return (bin);
}

int		if_ra(t_data **a, t_data **b, int i, int j)
{
	t_data *cpy_a;
	t_data *cpy_b;
	int size;

	size = lst_size(*a);
	cpy_a = lst_dup(*a);
	cpy_b = lst_dup(*b);
	while (j < size)
	{
		if (!(cpy_a->id >> i & 1))
			pb(&cpy_b, &cpy_a, 1);
		else
		{
			lst_clear(&cpy_a);
			lst_clear(&cpy_b);
			return (1);
		}
		j++;
	}
	lst_clear(&cpy_a);
	lst_clear(&cpy_b);
	return (0);
}

void	radix_sort(t_data **a, t_data **b)
{
	t_data	*tmp;
	int size;
	int bit;
	int i;
	int j;
	
	tmp = *a;
	size = lst_size(*a);
	bit = get_bin(size - 1);
	i = 0;
	while (i < bit)
	{
		j = 0;
		while (j < size)
		{
			if (!if_ra(a, b, i, j))
				break ;
			if (!((*a)->id >> i & 1))
				pb(b, a, 0);
			else
				ra(a);
			j++;
		}
		while (*b)
			pa(a, b);
		i++;
	}
}
