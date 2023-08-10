/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:32:41 by bguyot            #+#    #+#             */
/*   Updated: 2023/08/10 14:28:14 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURES_H
# define STRUCTURES_H

# include "../libs/libft/libft.h"

typedef struct s_pushswap {
	t_list	**stack_a;
	t_list	**stack_b;
	t_list	**operations;
}	t_pushswap;

enum	e_error_code
{
	FT_ERR_ALLOCATION = 1,
	FT_ERR_NOT_A_INT = 2,
	FT_ERR_DUPLICATE = 3
};

enum	e_oper
{
	SA,
	SB,
	SS,
	PA,
	PB,
	RA,
	RB,
	RR,
	RRA,
	RRB,
	RRR
};

#endif
