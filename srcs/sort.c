/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:37:25 by bguyot            #+#    #+#             */
/*   Updated: 2023/08/10 14:13:39 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/sort.h"

static int	is_sorted(t_list *stack);

t_list	**sort(t_list **stack_a)
{
	t_list	**oper;

	oper = ft_calloc(1, sizeof (t_list *));
	if (!oper)
		return (NULL);
	if (is_sorted(*stack_a))
		return (oper);
	return (oper);
}

static int	is_sorted(t_list *stack)
{
	while (stack->next)
	{
		if (stack->next->content < stack->content)
			return (0);
		stack = stack->next;
	}
	return (1);
}
