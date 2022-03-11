/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:28:42 by bguyot            #+#    #+#             */
/*   Updated: 2022/03/11 17:28:47 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"

void	ft_sa(t_stacks **stk)
{
	t_list	**a_ptr;
	t_list	*a_next;

	a_ptr = (*stk)->a;
	a_next = (*a_ptr)->nx;
	(*a_ptr)->nx = a_next->nx;
	a_next->nx = *a_ptr;
	*a_ptr = a_next;
}
