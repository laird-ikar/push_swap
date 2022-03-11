/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 08:05:19 by bguyot            #+#    #+#             */
/*   Updated: 2022/03/11 07:22:46 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	stacks_print(t_stacks stacks)
{
	while (lst)
	{
		ft_putnbr_fd(*(int *) lst->cont, 1);
		ft_putchar_fd('\n', 1);
		lst = lst->nx;
	}
}
