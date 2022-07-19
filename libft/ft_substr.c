/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekwak <ekwak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:28:19 by ekwak             #+#    #+#             */
/*   Updated: 2022/07/11 15:51:36 by ekwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	char	*str;

	if (s == 0)
		return (0);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == 0)
		return (0);
	size = ft_strlen(s);
	if (size <= start)
	{
		*str = 0;
		return (str);
	}
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}
