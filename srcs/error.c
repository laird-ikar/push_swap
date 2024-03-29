/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 09:14:18 by bguyot            #+#    #+#             */
/*   Updated: 2023/07/06 09:55:14 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/error.h"

void	error(int code, t_pushswap push_swap)
{
	tini(push_swap);
	ft_putstr_fd("Error\n", STDERR_FILENO);
	exit(code);
}
