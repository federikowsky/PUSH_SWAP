/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefilipp <fefilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 02:11:09 by fefilipp          #+#    #+#             */
/*   Updated: 2022/01/26 13:13:15 by fefilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// genera copia di s1 da stack a heap

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*str;

	len = ft_strlen((char *)s1);
	str = (char *)malloc(len * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	while (len >= 0)
	{
		str[len] = s1[len];
		len--;
	}
	return (str);
}
