
#include "../include/push_swap.h"

void	adaptive_algo(t_all *all)
{
	if (all->n_args <= 100 && all->disorder_value < 0.2)
		simple_algo(all);
	else if (all->n_args <= 500 && all->disorder_value < 0.5)
		medium_algo(all);
	else if (all->n_args >= 500 && all->disorder_value >= 0.5)
		complex_algo(all);
}
