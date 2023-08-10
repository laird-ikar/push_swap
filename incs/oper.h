/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oper.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:00:14 by bguyot            #+#    #+#             */
/*   Updated: 2023/08/10 14:13:39 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPER_H
# define OPER_H

# include "./structures.h"

/**
 * @brief	Take the last element of a and push it to b
 * @param	a	The first list
 * @param	b	The second list
 */
void	push(t_list **a, t_list **b);

/**
 *	@brief	Swap the two last elements of a
 *	@param	a	The list
 */
void	swap(t_list **a);

/**
 *	@brief	Rotate the list a in the sense specified
 *	@param	a			The list
 *	@param	is_reversed	The sense of rotation
 */
void	rota(t_list **a, int is_reversed);

#endif
