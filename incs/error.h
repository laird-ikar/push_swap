/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 09:15:02 by bguyot            #+#    #+#             */
/*   Updated: 2023/07/30 17:38:45 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_H
# define ERROR_H

# include "structures.h"
# include "init.h"

/**
 *	@brief	Print the error message, free push_swap and exit with code
 *	@param	code		The error code
 *	@param	push_swap	The structure to free
 */
void	error(int code, t_pushswap push_swap);

#endif
