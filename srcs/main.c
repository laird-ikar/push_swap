/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:19:54 by bguyot            #+#    #+#             */
/*   Updated: 2023/07/06 09:19:11 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/main.h"

/**
 *	@brief		Main loop of the program
 *	@details	The work is splitted in a few functions that parse the arguments
 *		Replace the list with an equivalent list [0..n]
 *		Find a sequence of operation that sort the list
 *		Optimize that sequence
 *		And Finally print the list
 */
int	main(int argc, char *argv[])
{
	int			err;
	t_pushswap	push_swap;

	push_swap = init();
	if (!push_swap.stack_a || !push_swap.stack_b || !push_swap.operations)
		error(FT_ERR_ALLOCATION, push_swap);
	err = parse(argc, argv, push_swap.stack_a);
	if (err)
		error(err, push_swap);
	normalize(push_swap.stack_a);
	push_swap.operations = sort(push_swap.stack_a, push_swap.stack_b);
	optimize(push_swap.operations);
	print(push_swap.operations);
	tini(push_swap);
}
