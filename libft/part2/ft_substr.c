/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekwak <ekwak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:28:19 by ekwak             #+#    #+#             */
/*   Updated: 2022/07/19 11:46:22 by ekwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	const size_t	s_len = ft_strlen(s);

	if (s == 0)
		return (0);
	if (s_len < start || len == 0)
	{
		return (ft_strdup(""));
	}
	if (s_len - start < len)
		len = s_len - start;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == 0)
		return (0);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}
