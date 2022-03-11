/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_lstsorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:27:13 by bguyot            #+#    #+#             */
/*   Updated: 2022/03/11 17:27:18 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	is_lstsorted(t_list *lst)
{
	while (lst && lst->nx)
	{
		if (*(long *)lst->cont > *(long *)lst->nx->cont)
			return (0);
	}
	return (1);
}
