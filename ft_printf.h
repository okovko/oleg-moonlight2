/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 03:44:40 by olkovale          #+#    #+#             */
/*   Updated: 2017/09/06 18:30:46 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stddef.h>
#include <stdint.h>
#include <wchar.h>

#include "libft.h"

typedef enum	e_fmt_spec
{
	E_FMT_SPEC_NONE,
	E_FMT_SPEC_INT,
	E_FMT_SPEC_UINT,
	E_FMT_SPEC_OCTAL,
	E_FMT_SPEC_HEX,
	E_FMT_SPEC_HEX_UPPER,
	E_FMT_SPEC_FLOAT,
	E_FMT_SPEC_FLOAT_UPPER,
	E_FMT_SPEC_EXP,
	E_FMT_SPEC_EXP_UPPER,
	E_FMT_SPEC_FLOAT_OR_EXP,
	E_FMT_SPEC_FLOAT_OR_EXP_UPPER,
	E_FMT_SPEC_HEX_FLOAT,
	E_FMT_SPEC_HEX_FLOAT_UPPER,
	E_FMT_SPEC_CHAR,
	E_FMT_SPEC_STR,
	E_FMT_SPEC_PTR,
	E_FMT_SPEC_N_PTR,
	E_FMT_SPEC_PERCENT,
}				t_fmt_spec;

#endif
