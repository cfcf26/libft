/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekwak <ekwak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 22:24:11 by ekwak             #+#    #+#             */
/*   Updated: 2022/07/19 10:44:27 by ekwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		i;
	const char	temp = (char)c;

	i = 0;
	while (s[i])
	{
		if (s[i] == temp)
			return ((char *)s + i);
		i++;
	}
	if (!temp && s[i] == '\0')
		return ((char *)s + i);
	return (NULL);
}
