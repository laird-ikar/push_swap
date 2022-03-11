/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimize_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 08:09:05 by bguyot            #+#    #+#             */
/*   Updated: 2022/03/10 09:56:14 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	minimaze_rotate(t_list *lst, int max)
{
	int	r_count;
	int	rr_count;

	r_count = 0;
	while (lst->cont > max)
	{
		lst = lst->nx;
		r_count++;
	}
	rr_count = -1;
	while (ft_lstcalendar(lst, ft_lstsize(lst) + rr_count)->cont > max)
		rr_count--;
	if (ft_abs(r_count) < ft_abs(rr_count))
		return (r_count);
	return (rr_count);
}
