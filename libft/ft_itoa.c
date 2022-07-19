/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekwak <ekwak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:00:39 by ekwak             #+#    #+#             */
/*   Updated: 2022/07/19 15:00:43 by ekwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_rev_char_tab(char *tab, int size)
{
	int	i;
	int	rev_tab;

	i = 0;
	while (i < (size / 2))
	{
		rev_tab = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = rev_tab;
		i++;
	}
}

char	*ft_do_itoa(char *str, unsigned int n, int flag)
{
	int		i;
	char	*dup;

	i = 0;
	while (n > 0)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	if (flag == 1)
	{
		str[i] = '-';
		i++;
	}
	ft_rev_char_tab(str, i);
	dup = ft_strdup(str);
	return (dup);
}

char	*ft_itoa(int n)
{
	char	str[12];
	int		flag;

	flag = 0;
	if (n == 0)
	{
		return (ft_strdup("0"));
	}
	else if (n < 0)
	{
		n *= -1;
		flag = 1;
	}
	ft_bzero(str, 12);
	return (ft_do_itoa(str, (unsigned int)n, flag));
}
