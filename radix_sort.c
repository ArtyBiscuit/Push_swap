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
	return (bin + 1);
}

void	radix_sort(t_data **a, t_data **b)
{
	t_data	*tmp;
	int size;
	int bit;
	int i;
	int j;
	
	tmp = *a;
	size = 0;

	while (tmp)
	{
		tmp = tmp->next;
		size++;
	}
	bit = get_bin(size - 1);
	i = 0;
	while (i < bit)
	{
		j = 0;
		while (j < size)
		{
			if (!((*a)->id >> i & 1))
				pb(b, a);
			else
				ra(a);
			j++;
		}
		while (*b)
			pa(a, b);
		i++;
	}
}
