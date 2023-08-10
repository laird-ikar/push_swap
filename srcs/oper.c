/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oper.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 13:59:07 by bguyot            #+#    #+#             */
/*   Updated: 2023/08/10 14:45:58 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/oper.h"

void	push(t_list **a, t_list **b) //COMBAK: workn't
{
	t_list	*last_a;
	t_list	*last_b;


	if (!ft_lstsize(*a))
		return ;
	last_a = ft_lstlast(*a);
	last_b = ft_lstlast(*b);
	if (last_b)
		last_b->next = last_a;
	else
		*b = last_a;
	ft_lstnnext(*a, ft_lstsize(*a) - 2)->next = NULL;
}

void	swap(t_list **a)
{
	t_list	*last;
	t_list	*prev;

	last = ft_lstlast(*a);
	prev = ft_lstnnext(*a, ft_lstsize(*a) - 2);
	ft_lstnnext(*a, ft_lstsize(*a) - 2)->next = last;
	last->next = prev;
	prev->next = NULL;
}

void	rota(t_list **a, int is_reversed)
{
	t_list	*last;
	t_list	*tmp;

	last = ft_lstlast(*a);
	if (is_reversed)
	{
		tmp = (*a)->next;
		last->next = *a;
		(*a)->next = NULL;
		*a = tmp;
	}
	else
	{
		ft_lstnnext(*a, ft_lstsize(*a) - 2)->next = NULL;
		last->next = *a;
		*a = last;
	}
}
