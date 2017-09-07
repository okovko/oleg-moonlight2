/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 22:56:01 by olkovale          #+#    #+#             */
/*   Updated: 2017/08/18 03:11:06 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strtol(const char *str, char **end, int base)
{
	(void)str;
	(void)end;
	(void)base;
	return (0);
	/*
	char	c;
	int		neg_num;
	int		neg;

	while ((c = *str) && ISSPACE(c))
		str++;
	neg = c == '-';
	str += c == '-' || c == '+';
	neg_num = 0;
	while ((c = *str++) && ISDIGIT(c))
		neg_num = neg_num * 10 - c + '0';
	return (neg ? neg_num : -neg_num);
	*/
}
