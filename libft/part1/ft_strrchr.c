/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekwak <ekwak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 22:27:39 by ekwak             #+#    #+#             */
/*   Updated: 2022/07/19 14:44:43 by ekwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	ssize_t		i;
	const char	temp = (char)c;

	i = (ssize_t)ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == temp)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
