/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 10:00:05 by bguyot            #+#    #+#             */
/*   Updated: 2023/07/26 16:02:35 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NORMALIZE_H
# define NORMALIZE_H

# include "../libs/libft/libft.h"
# include "error.h"

/**
 *	@brief	Replace the stack composed of n ints between INTMIN and INTMAX
 *		by an equivalent stack (orderwise) composed of [0..n)
 *	@param	stack	The stack to normalize
 *	@return	Should return 0 (the return is here as a prehentive move
 *		if error returns are needed later)
 */
int	normalize(t_list **stack);

#endif
