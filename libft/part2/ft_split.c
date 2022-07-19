/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekwak <ekwak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:40:35 by ekwak             #+#    #+#             */
/*   Updated: 2022/07/19 15:21:40 by ekwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	w_count(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static	char	*w_dup(char	const *s, char c)
{
	size_t	len;
	char	*str;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s, len + 1);
	return (str);
}

static	char	**ft_freeall(char **str, size_t i)
{
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
	return ((void *)0);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	if (!(str = (char **)malloc(sizeof(char *) * (w_count(s, c) + 1))))
		return (NULL);
	while (i < w_count(s, c) && s[j])
	{
		if (s[j] != c)
		{
			if ((str[i++] = w_dup(&(s[j]), c)) == NULL)
				return (ft_freeall(str, i));
			while (s[j] && s[j] != c)
				j++;
		}
		else
			j++;
	}
	str[i] = NULL;
	return (str);
}
