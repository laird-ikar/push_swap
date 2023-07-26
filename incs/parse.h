/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 09:32:25 by bguyot            #+#    #+#             */
/*   Updated: 2023/07/26 15:11:28 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_H
#define PARSE_H

#include "error.h"
#include "../libs/libft/libft.h"

/**
 * @brief	Read the arguments of the program and store them in the stack a
 * @param	argc	The number of arguments
 * @param	argv	The argument array
 * @param	stack_a	The chained list to fill
 * @return	The according error code (0 if no error)
 */
int parse(int argc, char *argv[], t_list **stack_a);

#endif
