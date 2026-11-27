#include "../include/push_swap.h"

void	choose_smc(t_all *all)
{
	if (all->flag_type == 1)
		simple_algo(all);
	else if (all->flag_type == 2)
		medium_algo(all);
	else if (all->flag_type == 4)
		complex_algo(all);
	else if (all->flag_type == 8)
		adaptive_algo(all);
	else if (all->flag_type == 0)
		adaptive_algo(all);
	else
		// error
	return ;
}

void	call_algo(t_all *all)
{
	choose_smc(all);
}

int	main(int argc, char **argv)
{
	t_all all;

	all.argv_copy = argv;
	set_all(&all, argc);
	call_algo(&all);

	return (free(all.stack_a), free(all.stack_b), 0);
}