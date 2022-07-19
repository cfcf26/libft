/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekwak <ekwak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 12:15:25 by ekwak             #+#    #+#             */
/*   Updated: 2022/07/11 15:26:03 by ekwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t		i;
	char		*src_dup;

	i = 0;
	while (src[i])
		i++;
	src_dup = (char *)malloc(sizeof(char) * (i + 1));
	if (src_dup == 0)
		return (0);
	i = 0;
	while (src[i])
	{
		src_dup[i] = src[i];
		i++;
	}
	src_dup[i] = '\0';
	return (src_dup);
}
