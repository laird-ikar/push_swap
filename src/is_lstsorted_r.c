/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_lstsorted_r.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 07:20:23 by bguyot            #+#    #+#             */
/*   Updated: 2022/03/08 08:23:16 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_lstsorted_r(t_list *lst)
{
	while (lst && lst->nx)
	{
		if (*(long *)lst->cont < *(long *)lst->nx->cont)
			return (0);
	}
	return (1);
}
