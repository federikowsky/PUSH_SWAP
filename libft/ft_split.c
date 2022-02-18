/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefilipp <fefilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:24:21 by fefilipp          #+#    #+#             */
/*   Updated: 2022/01/26 22:59:45 by fefilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates (with malloc(3)) and returns an array
// of strings obtained by splitting ’s’ using the
// character ’c’ as a delimiter. The array must end
// with a NULL pointer.

// int	find_c(const char *s, char c)
// {
// 	int	i;

// 	i = 0;
// 	while (*s++ != c)
// 		i++;
// 	return (i);
// }

// const char	*isvalid(const char *s, char c)
// {
// 	while (*s == c)
// 		s++;
// 	return (s);
// }

// int	size_split(char *temp, char c)
// {
// 	int	len;

// 	len = 0;
// 	while (temp != NULL && *temp)
// 	{
// 		if (ft_isprint(*temp) && *temp != c)
// 			len++;
// 		temp = ft_strchr(temp, c);
// 		if (temp != NULL)
// 			temp++;
// 	}
// 	return (len);
// }

// char	**ft_split(char const *s, char c)
// {
// 	int		len;
// 	char	*temp;
// 	char	**res;
// 	int		i;

// 	i = 0;
// 	temp = (char *)s;
// 	len = size_split(temp, c);
// 	res = (char **)malloc(sizeof(char *) * len + 1);
// 	if (!res)
// 		return (NULL);
// 	while (i < len)
// 	{
// 		s = isvalid(s, c);
// 		res[i++] = ft_strdup(ft_substr(s, 0, find_c(s, c)));
// 		s = ft_strchr(s, c);
// 	}
// 	res[i] = 0;
// 	return (res);
// }
size_t	ft_countarray(char const *s, char c)
{
	int	i;
	int	array;

	i = 0;
	array = 0;
	if (!s)
		return (0);
	if (s[i] && s[i] != c)
		array++;
	if (s[i])
		i++;
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
			array++;
		i++;
	}
	return (array);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	array;
	size_t	start;
	char	**str;

	j = 0;
	i = 0;
	array = ft_countarray(s, c);
	str = malloc((array + 1) * sizeof(char *));
	if (!str || !s)
		return (NULL);
	while (s[i] && j < array)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		str[j] = ft_substr(s, start, i - start);
		j++;
	}
	str[j] = NULL;
	return (str);
}
