/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_lstsorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 07:20:26 by bguyot            #+#    #+#             */
/*   Updated: 2022/03/08 08:23:15 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_lstsorted(t_list *lst)
{
	while (lst && lst->nx)
	{
		if (*(long *)lst->cont > *(long *)lst->nx->cont)
			return (0);
	}
	return (1);
}
