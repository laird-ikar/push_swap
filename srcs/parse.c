/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 09:31:07 by bguyot            #+#    #+#             */
/*   Updated: 2023/07/07 10:36:13 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/parse.h"

int	parse(int argc, char *argv[], t_list **stack_a)
{
	int		n;
	t_list	*new_block;

	while (--argc)
	{
		if (!is_number(argv[argc]))
			return (FT_ERR_NOT_A_INT);
		n = ft_atoi(argv[argc]);
		if (list_include(*stack_a, n))
			return (FT_ERR_DUPLICATE);
		new_block = ft_calloc(1, sizeof (t_list));
		if (!new_block)
			return (FT_ERR_ALLOCATION);
		new_block->content = ft_calloc(1, sizeof (long));
		if (!new_block->content)
			return (FT_ERR_ALLOCATION);
		*((int *) new_block->content) = n;
		ft_lstadd_back(stack_a, new_block);
	}
	return (0);
}

static int	is_number(char *str)
{
	int	nb_minus;
	int	nb_digit;

	nb_digit = 0;
	nb_minus = 0;
	if (str[0] == '-')
		nb_minus++;
	while (str[nb_digit + nb_minus])
	{
		if (!ft_isdigit(str[nb_digit + nb_minus]))
			return (0);
		nb_digit++;
	}
	if (nb_digit > 10)
		return (0);
	if (nb_digit < 10)
		return (1);
	if (nb_minus && ft_strcmp("2147483648", str + 1) < 0)
		return (0);
	if (!nb_minus && ft_strcmp("2147483647", str + 1) < 0)
		return (0);
	return (1);
}

static int	list_include(t_list *list, int n)
{
	while (list)
	{
		if (*((int *) list->content) == n)
			return (1);
		list = list->next;
	}
	return (0);
}
