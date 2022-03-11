/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:28:22 by bguyot            #+#    #+#             */
/*   Updated: 2022/03/11 17:28:27 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"

void	ft_pa(t_stacks **stk)
{
	t_list	**b_ptr;
	t_list	**a_ptr;
	t_list	*b;

	if (*((*stk)->b))
	{
		b_ptr = (*stk)->b;
		a_ptr = (*stk)->a;
		b = *((*stk)->b);
		*b_ptr = b->nx;
		b->nx = *a_ptr;
		*a_ptr = b;
	}
}
