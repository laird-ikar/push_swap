/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:05:51 by bguyot            #+#    #+#             */
/*   Updated: 2022/03/14 08:02:18 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const unsigned char	*tmp;

	tmp = NULL;
	while (*s)
	{
		if (*s == c)
			tmp = (unsigned char *) s;
		s++;
	}
	if (c == '\0')
		return ((char *) s);
	return ((char *) tmp);
}
