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

void	show_bench(t_all *all)
{
	char	*strat;

	if (all->bench != 16)
		return ;
	if (all->flag_type == 1)
		strat = "Simple";
	else if (all->flag_type == 2)
		strat = "Medium";
	else if (all->flag_type == 4)
		strat = "Complex";
	else if (all->flag_type == 8)
		strat = "Adaptive";
	ft_printf("[bench] disorder:  %f%%\n", all->disorder_value);
	ft_printf("[bench] strategy:  %s / %s\n", strat, all->strat);
	ft_printf("[bench] total_ops:  %d\n", all->count_all_ops);
	ft_printf("[bench] sa:  %d  sb:  %d  ss:  %d  pa:  %d  pb:  %d\n", all->sa_count, all->sb_count, all->ss_count, all->pa_count, all->pb_count);
	ft_printf("[bench] ra:  %d  rb:  %d  rr:  %d  rra:  %d  rrb:  %d  rrr:  %d\n", all->ra_count, all->rb_count, all->rr_count, all->rra_count, all->rrb_count, all->rrr_count);
}

int	main(int argc, char **argv)
{
	t_all all;

	all.argv_copy = argv;
	set_all(&all, argc);
	call_algo(&all);
	show_bench(&all);

	return (free(all.stack_a), free(all.stack_b), 0);
}