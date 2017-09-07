/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 02:57:03 by olkovale          #+#    #+#             */
/*   Updated: 2017/09/06 18:37:03 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "libft.h"
#include "ft_printf.h"

static t_map_kv		g_spec_kvs[] = (t_map_kv[])
{
	{(void *)"d", (void *)(t_fmt_spec[]){E_FMT_SPEC_INT}},
	{(void *)"D", (void *)(t_fmt_spec[]){E_FMT_SPEC_INT}},
	{(void *)"i", (void *)(t_fmt_spec[]){E_FMT_SPEC_INT}},
	{(void *)"u", (void *)(t_fmt_spec[]){E_FMT_SPEC_UINT}},
	{(void *)"U", (void *)(t_fmt_spec[]){E_FMT_SPEC_UINT}},
	{(void *)"o", (void *)(t_fmt_spec[]){E_FMT_SPEC_OCTAL}},
	{(void *)"O", (void *)(t_fmt_spec[]){E_FMT_SPEC_OCTAL}},
	{(void *)"x", (void *)(t_fmt_spec[]){E_FMT_SPEC_HEX}},
	{(void *)"X", (void *)(t_fmt_spec[]){E_FMT_SPEC_HEX_UPPER}},
	{(void *)"f", (void *)(t_fmt_spec[]){E_FMT_SPEC_FLOAT}},
	{(void *)"F", (void *)(t_fmt_spec[]){E_FMT_SPEC_FLOAT_UPPER}},
	{(void *)"e", (void *)(t_fmt_spec[]){E_FMT_SPEC_EXP}},
	{(void *)"E", (void *)(t_fmt_spec[]){E_FMT_SPEC_EXP_UPPER}},
	{(void *)"g", (void *)(t_fmt_spec[]){E_FMT_SPEC_FLOAT_OR_EXP}},
	{(void *)"G", (void *)(t_fmt_spec[]){E_FMT_SPEC_FLOAT_OR_EXP_UPPER}},
	{(void *)"a", (void *)(t_fmt_spec[]){E_FMT_SPEC_HEX_FLOAT}},
	{(void *)"A", (void *)(t_fmt_spec[]){E_FMT_SPEC_HEX_FLOAT_UPPER}},
	{(void *)"c", (void *)(t_fmt_spec[]){E_FMT_SPEC_CHAR}},
	{(void *)"C", (void *)(t_fmt_spec[]){E_FMT_SPEC_CHAR}},
	{(void *)"s", (void *)(t_fmt_spec[]){E_FMT_SPEC_STR}},
	{(void *)"S", (void *)(t_fmt_spec[]){E_FMT_SPEC_STR}},
	{(void *)"p", (void *)(t_fmt_spec[]){E_FMT_SPEC_PTR}},
	{(void *)"n", (void *)(t_fmt_spec[]){E_FMT_SPEC_N_PTR}},
	{(void *)"%", (void *)(t_fmt_spec[]){E_FMT_SPEC_PERCENT}},
};
static t_map		g_spec_map =
{
	.sz = sizeof(g_spec_kvs),
	.key_sz = sizeof(char *),
	.val_sz = sizeof(t_fmt_spec),
	.kvs = g_spec_kvs,
};

int		main(void)
{
	const char		*key = "c";
	t_map_kv		*kv;
	t_fmt_spec		val;
	
	kv = ft_mapget(&g_spec_map, (void *)key, ft_map_keycmp_str);
	val = *(t_fmt_spec *)kv->val;
	printf("key = %s, val = %d\n", key, val);
	return (0);
}
