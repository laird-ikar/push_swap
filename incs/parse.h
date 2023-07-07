/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 09:32:25 by bguyot            #+#    #+#             */
/*   Updated: 2023/07/07 10:36:00 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_H
# define PARSE_H

# include "error.h"
# include "../libs/libft/libft.h"

/**
 * @brief	Read the arguments of the program and store them in the stack a
 * @param	argc	The number of arguments
 * @param	argv	The argument array
 * @param	stack_a	The chained list to fill
 * @return	The according error code (0 if no error)
 */
int			parse(int argc, char *argv[], t_list **stack_a);
/**
 *	@brief	Check if str is a valid representation of a integer
 *	@param	str	The string to test
 *	@return	1 if the string is valid, 0 if not
 */
static int	is_number(char *str);
/**
 *	@brief	Check if the list contains a number or not
 *	@param	list	The list to check
 *	@param	n		The number to check against
 *	@return	1 if n is in list, 0 if not
 */
static int	list_include(t_list *list, int n);

#endif
