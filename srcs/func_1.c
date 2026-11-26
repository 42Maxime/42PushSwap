#include "../include/push_swap.h"

void	pa(t_all *all)
{
	if (all->tsb < 1)
		return ;
	all->fa -= 1;
	all->stack_a[all->fa] = all->stack_b[all->fb];
	all->fb += 1;
	all->tsb -= 1;
	all->tsa += 1;
	all->counterp += 1;
	//printf("pa\n");
}

void	pb(t_all *all)
{
	if (all->tsa < 1)
		return ;
	all->fb -= 1;
	all->stack_b[all->fb] = all->stack_a[all->fa];
	all->fa += 1;
	all->tsa -= 1;
	all->tsb += 1;
	all->counterp += 1;
	//printf("pb\n");
}

void	sa(t_all *all)
{
	int	temp;

	if (all->tsa < 2)
		return ;
	temp = all->stack_a[all->fa];
	all->stack_a[all->fa] = all->stack_a[all->fa + 1];
	all->stack_a[all->fa + 1] = temp;
	all->counterp += 1;
	//printf("sa\n");
}

void	sb(t_all *all)
{
	int	temp;

	if (all->tsa < 2)
		return ;
	temp = all->stack_b[all->fb];
	all->stack_b[all->fb] = all->stack_b[all->fb + 1];
	all->stack_b[all->fb + 1] = temp;
	all->counterp += 1;
	//printf("sb\n");
}

void	ss(t_all *all)
{
	sa(all);
	sb(all);
}