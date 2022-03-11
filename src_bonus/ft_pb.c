/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:28:26 by bguyot            #+#    #+#             */
/*   Updated: 2022/03/11 17:28:31 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"

void	ft_pb(t_stacks **stk)
{
	t_list	**a_ptr;
	t_list	**b_ptr;
	t_list	*a;

	if (*((*stk)->a) && (*stk)->b)
	{
		a_ptr = (*stk)->a;
		b_ptr = (*stk)->b;
		a = *((*stk)->a);
		*a_ptr = a->nx;
		a->nx = *b_ptr;
		*b_ptr = a;
	}
}
