/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strevery.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/23 21:45:23 by olkovale          #+#    #+#             */
/*   Updated: 2017/06/23 21:45:23 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

int		ft_strevery(char const *s, int (*f)(char))
{
	char	c;

	while ((c = *s++))
	{
		if (!f(c))
			return (0);
	}
	return (1);
}
