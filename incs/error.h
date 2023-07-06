/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 09:15:02 by bguyot            #+#    #+#             */
/*   Updated: 2023/07/06 10:40:14 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_H
# define ERROR_H

# include "structures.h"
# include "init.h"

enum	e_error_code
{
	FT_ERR_ALLOCATION = 1,
	FT_ERR_NOT_A_INT = 2,
	FT_ERR_DUPLICATE = 3
};

/**
 *	@brief	Print the error message, free push_swap and exit with code
 *	@param	code		The error code
 *	@param	push_swap	The structure to free
 */
void	error(int code, t_pushswap push_swap);

#endif
