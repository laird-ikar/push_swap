/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 17:17:20 by bguyot            #+#    #+#             */
/*   Updated: 2023/08/10 14:13:39 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/print.h"

const char	g_oper_str[][3] = {
[SA] = "sa",
[SB] = "sb",
[SS] = "ss",
[PA] = "pa",
[PB] = "pb",
[RA] = "ra",
[RB] = "rb",
[RR] = "rr",
[RRA] = "rra",
[RRB] = "rrb",
[RRR] = "rrr"
};

void	print(t_list **oper)
{
	t_list	*oper_tmp;

	oper_tmp = *oper;
	while (oper_tmp)
	{
		ft_putendl_fd(g_oper_str[*(int *)(oper_tmp->content)], 1);
		oper_tmp = oper_tmp->next;
	}
}
