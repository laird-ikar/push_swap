/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:26:51 by bguyot            #+#    #+#             */
/*   Updated: 2022/03/14 07:24:54 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sb(t_stacks **stk)
{
	t_list	**b_ptr;
	t_list	*b_next;

	b_ptr = (*stk)->b;
	b_next = (*b_ptr)->nx;
	(*b_ptr)->nx = b_next->nx;
	b_next->nx = *b_ptr;
	*b_ptr = b_next;
	ft_putendl_fd("sb", 1);
}
