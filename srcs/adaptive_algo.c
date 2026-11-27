
#include "../include/push_swap.h"

void	adaptive_algo(t_all *all)
{
	if (all->n_args <= 100 && all->disorder_value < 0.2)
	{
		simple_algo(all);
		all->strat = "O(n2)";
	}
	else if (all->n_args <= 500 && all->disorder_value < 0.5)
	{
		medium_algo(all);
		all->strat = "O(n√n)";
	}
	else if (all->n_args >= 500 && all->disorder_value >= 0.5)
	{
		all->strat = "O(n log n)";
		complex_algo(all);
	}
}
