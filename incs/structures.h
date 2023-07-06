/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:32:41 by bguyot            #+#    #+#             */
/*   Updated: 2023/07/06 09:05:49 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURES_H
# define STRUCTURES_H

# include "../libs/libft/libft.h"

typedef t_list	t_ps_list;

typedef struct s_pushswap {
	t_ps_list	**stack_a;
	t_ps_list	**stack_b;
	t_ps_list	**operations;
}	t_pushswap;

#endif