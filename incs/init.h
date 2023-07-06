/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 10:44:32 by bguyot            #+#    #+#             */
/*   Updated: 2023/07/06 09:18:53 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INIT_H
# define INIT_H

# include "./structures.h"

/**
 *	@brief	Allocate the memory needed for my structure
 *	@return	The push_swap structure with allocated lists
 */
t_pushswap	init(void);

/**
 *	@brief	Deallocate the memory used by the structure
 *	@param	push_swap	A copy of the structure containing all
 *		the pointers to dealocate
 */
void		tini(t_pushswap push_swap);

#endif
