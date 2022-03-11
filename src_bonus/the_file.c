/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_file.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:28:55 by bguyot            #+#    #+#             */
/*   Updated: 2022/03/11 17:29:00 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"

static long	fake_switch_case(char *nxt, t_stacks *stk);

void	check_stdin(t_stacks *stk)
{
	char	*nxt;

	nxt = get_next_line(0);
	while (nxt)
	{
		if (fake_switch_case(nxt, stk) == ERROR)
		{
			ft_putendl_fd("Error", 2);
			exit(1);
		}
		nxt = get_next_line(0);
	}
	if (is_lstsorted(*stk->a) && !*stk->b)
	{
		ft_putendl_fd("OK", 1);
		exit(1);
	}
	ft_putendl_fd("KO", 1);
	exit (1);
}

static long	fake_switch_case(char *nxt, t_stacks *stk)
{
	if (!ft_strcmp(nxt, "ra\n"))
		ft_ra(&stk);
	else if (!ft_strcmp(nxt, "rb\n"))
		ft_rb(&stk);
	else if (!ft_strcmp(nxt, "rr\n"))
		ft_rr(&stk);
	else if (!ft_strcmp(nxt, "rra\n"))
		ft_rra(&stk);
	else if (!ft_strcmp(nxt, "rrb\n"))
		ft_rrb(&stk);
	else if (!ft_strcmp(nxt, "rrr\n"))
		ft_rrr(&stk);
	else if (!ft_strcmp(nxt, "sa\n"))
		ft_sa(&stk);
	else if (!ft_strcmp(nxt, "sb\n"))
		ft_sb(&stk);
	else if (!ft_strcmp(nxt, "ss\n"))
		ft_ss(&stk);
	else if (!ft_strcmp(nxt, "pa\n"))
		ft_pa(&stk);
	else if (!ft_strcmp(nxt, "pb\n"))
		ft_pb(&stk);
	else
		return (ERROR);
	return (1);
}
