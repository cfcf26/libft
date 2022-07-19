/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   part1_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekwak <ekwak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:55:48 by ekwak             #+#    #+#             */
/*   Updated: 2022/07/19 17:04:49 by ekwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "part1.h"

int main(void)
{

	printf("int min		|atoi		: %d\n", atoi(CHAR_TO_INT_MIN));
	printf("int min		|ft_atoi	: %d\n", ft_atoi(CHAR_TO_INT_MIN));
	printf("int min		|atoi		: %d\n", atoi(CHAR_TO_INT_MAX));
	printf("int min		|ft_atoi	: %d\n", ft_atoi(CHAR_TO_INT_MAX));
//printf("int min		|atoi		: %d\n", atoi(0));		segmentation fault
//printf("int min		|ft_atoi	: %d\n", ft_atoi(0));	segmentation fault

	char *s1 = NULL;
	// bzero(s1, 3);
	ft_bzero(s1, 3);
	
}