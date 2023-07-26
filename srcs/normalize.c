/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 09:59:12 by bguyot            #+#    #+#             */
/*   Updated: 2023/07/26 15:25:48 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/normalize.h"

static void		shift_to_positive(t_list *lst);
static t_list	*find_smallest_greater(t_list *stack, long i);

int	normalize(t_list **stack)
{
	long	i;
	long	size;
	t_list	*local_smallest;

	i = 0;
	size = ft_lstsize(*stack);
	shift_to_positive(*stack);
	while (i < size)
	{
		local_smallest = find_smallest_greater(*stack, i);
		*((long *)local_smallest->content) = i;
		i++;
	}
	return (0);
}

static void	shift_to_positive(t_list *lst)
{
	long	min;

	min = ft_lstminint(lst);
	while (lst)
	{
		*((long *)lst->content) -= min;
		lst = lst->next;
	}
}

static t_list	*find_smallest_greater(t_list *stack, long i)
{
	t_list	*ret;

	ret = stack;
	while (stack)
	{
		if (*((long *)stack->content) < *((long *)ret->content)
			&& *((long *)stack->content) >= i)
			ret = stack;
		if (*((long *)ret->content) == i)
			return (ret);
		stack = stack->next;
	}
	return (ret);
}
