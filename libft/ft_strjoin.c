/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefilipp <fefilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 12:52:03 by fefilipp          #+#    #+#             */
/*   Updated: 2022/01/26 13:05:13 by fefilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	len(const char *s)
{
	if (*s)
		return (1 + len(s + 1));
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;

	res = (char *)malloc(sizeof(char) * (len(s1) + len(s2) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (*s1 || *s2)
	{
		if (*s1)
			res[i++] = *s1++;
		else
			res[i++] = *s2++;
	}
	res[i] = '\0';
	return (res);
}
