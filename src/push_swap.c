/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 08:07:56 by bguyot            #+#    #+#             */
/*   Updated: 2022/03/08 08:29:43 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main()
{
	t_list	lst;
	size_t	*tmp;

	for (size_t i = 0; i < 5; i++) {
		tmp = malloc(sizeof (size_t));
		*tmp = i;
		ft_lstadd_back(ft_lstnew(tmp));
	}
	ft_lstprint_int(lst);
}
