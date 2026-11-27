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
	if (all->bool == 0)
		ft_putstr_fd("pa\n", 1);
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
	if (all->bool == 0)
		ft_putstr_fd("pb\n", 1);
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
	if (all->bool == 0)
		ft_putstr_fd("sa\n", 1);
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
	if (all->bool == 0)
		ft_putstr_fd("sb\n", 1);
}

void	ss(t_all *all)
{
	all->bool = 1;
	sa(all);
	sb(all);
	all->bool = 0;
	ft_putstr_fd("ss\n", 1);
}