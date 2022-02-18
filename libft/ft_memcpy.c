/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefilipp <fefilpp@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 00:29:27 by fefilipp          #+#    #+#             */
/*   Updated: 2022/01/26 01:15:51 by fefilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dst_ptr;
	const char	*src_ptr;

	if (!dst && !src)
		return (0);
	dst_ptr = (char *) dst;
	src_ptr = (const char *) src;
	while (n-- > 0)
		*dst_ptr++ = *src_ptr++;
	return (dst);
}
