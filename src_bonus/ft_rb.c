/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:28:35 by bguyot            #+#    #+#             */
/*   Updated: 2022/03/11 17:28:40 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"

void	ft_rb(t_stacks **stk)
{
	t_list	**b_ptr;
	t_list	*b_next;

	if (ft_lstsize(*((*stk)->b)) > 1)
	{
		b_ptr = (*stk)->b;
		b_next = (*b_ptr)->nx;
		ft_lstlast(*b_ptr)->nx = *b_ptr;
		(*b_ptr)->nx = NULL;
		*b_ptr = b_next;
	}
}

void	ft_rrb(t_stacks **stk)
{
	t_list	**b_ptr;
	t_list	*b_last;

	if (ft_lstsize(*((*stk)->b)) > 1)
	{
		b_ptr = (*stk)->b;
		b_last = ft_lstlast(*b_ptr);
		ft_lstcalendar(*b_ptr, ft_lstsize(*b_ptr) - 2)->nx = NULL;
		b_last->nx = *b_ptr;
		*b_ptr = b_last;
	}
}
