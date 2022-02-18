/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefilipp <fefilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:06:16 by fefilipp          #+#    #+#             */
/*   Updated: 2022/01/26 22:47:23 by fefilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	unsigned int	lenght;

	if (!s)
		return (NULL);
	lenght = ft_strlen(s);
	if (lenght <= len)
		sub = (char *)malloc(sizeof(char) * lenght + 1);
	else
		sub = (char *)malloc(sizeof(char) * len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (start < lenght && len-- > 0)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
