/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstminint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:24:53 by bguyot            #+#    #+#             */
/*   Updated: 2022/03/11 17:24:58 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstminint(t_list *lst)
{
	int	min;

	min = 2147483647;
	while (lst)
	{
		if (min > *(int *)lst->cont)
		{
			min = *(int *)lst->cont;
		}
		lst = lst->nx;
	}
	return (min);
}
