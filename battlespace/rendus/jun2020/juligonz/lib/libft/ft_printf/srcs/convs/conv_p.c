/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 19:15:58 by juligonz          #+#    #+#             */
/*   Updated: 2019/12/02 15:46:35 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			conv_p(va_list args, t_manager *p)
{
	put_ptr(va_arg(args, unsigned long), p);
}
