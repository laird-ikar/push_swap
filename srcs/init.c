/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 10:43:59 by bguyot            #+#    #+#             */
/*   Updated: 2023/07/30 16:58:33 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/init.h"

t_pushswap	init(void)
{
	t_pushswap	ret;

	ft_bzero(&ret, sizeof(t_pushswap));
	ret.stack_a = ft_calloc(1, sizeof(t_ps_list *));
	ret.operations = ft_calloc(1, sizeof(t_ps_list *));
	return (ret);
}

void	tini(t_pushswap push_swap)
{
	ft_lstclear(push_swap.operations, free);
	free(push_swap.operations);
	ft_lstclear(push_swap.stack_a, free);
	free(push_swap.stack_a);
}
