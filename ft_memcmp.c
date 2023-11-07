/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:43:20 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/07 11:30:30 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *p1, const void *p2, size_t n)
{
	size_t			i;
	unsigned char	*p1_ptr;
	unsigned char	*p2_ptr;

	p1_ptr = (unsigned char *)p1;
	p2_ptr = (unsigned char *)p2;
	i = -1;
	while (++i < n)
	{
		if (p1_ptr[i] != p2_ptr[i])
			return (p1_ptr[i] - p2_ptr[i]);
	}
	return (0);
}
