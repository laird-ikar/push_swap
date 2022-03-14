/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcalendar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:49:48 by bguyot            #+#    #+#             */
/*   Updated: 2022/03/14 08:01:47 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstcalendar(const t_list *lst, size_t calendar)
{
	if (!lst)
		return (NULL);
	while (calendar-- && lst->nx)
		lst = lst->nx;
	return ((t_list *) lst);
}
