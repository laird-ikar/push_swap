/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:37:25 by bguyot            #+#    #+#             */
/*   Updated: 2023/07/30 17:13:17 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/sort.h"

static int	is_sorted(t_ps_list *stack);

t_ps_list	**sort(t_ps_list **stack_a)
{
	t_ps_list	**oper;

	oper = ft_calloc(1, sizeof (t_ps_list *));
	if (!oper)
		return (NULL);
	if (is_sorted(*stack_a))
		return (oper);
	return (NULL);
}

static int	is_sorted(t_ps_list *stack)
{
	while (stack->next)
	{
		if (stack->next->content < stack->content)
			return (0);
		stack = stack->next;
	}
	return (1);
}
