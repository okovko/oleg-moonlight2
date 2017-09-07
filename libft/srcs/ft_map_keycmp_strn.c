/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_keycmp_strn.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 10:12:17 by olkovale          #+#    #+#             */
/*   Updated: 2017/08/22 10:29:41 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_map_keycmp_strn(void *s1, void *s2, size_t sz)
{
	return (ft_strncmp((char *)s1, (char *)s2, sz));
}
