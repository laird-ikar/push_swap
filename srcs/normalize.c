/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 09:59:12 by bguyot            #+#    #+#             */
/*   Updated: 2023/07/26 16:26:16 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/normalize.h"

/**
 *	@brief	Allocate a new long* that hold
 */
static long		*ft_longnew(long n);

/**
 *	@brief	Count the number of elements of the list stricly lower than n in lst
 */
static long		nb_smaller(long n, t_list *lst);

int	normalize(t_list **stack)
{
	t_list	*stack_ptr;
	t_list	*normalized_ptr;
	t_list	*normalized;

	stack_ptr = (*stack)->next;
	normalized = ft_lstnew(ft_longnew(nb_smaller(
					*((long *)(*stack)->content), *stack)));
	normalized_ptr = normalized;
	if (!normalized_ptr)
		return (ft_lstclear(&normalized, free), FT_ERR_ALLOCATION);
	while (stack_ptr)
	{
		normalized_ptr->next = ft_lstnew(ft_longnew(nb_smaller(
						*((long *) stack_ptr->content), *stack)));
		if (!normalized_ptr)
			return (ft_lstclear(&normalized, free), FT_ERR_ALLOCATION);
		stack_ptr = stack_ptr->next;
		normalized_ptr = normalized_ptr->next;
	}
	ft_lstclear(stack, free);
	*stack = normalized;
	return (0);
}

static long	*ft_longnew(long n)
{
	long	*ret;

	ret = malloc(sizeof (long));
	*ret = n;
	return (ret);
}

static long	nb_smaller(long n, t_list *lst)
{
	long	ret;

	ret = 0;
	while (lst)
	{
		if (*((long *) lst->content) < n)
			ret++;
		lst = lst->next;
	}
	return (ret);
}
