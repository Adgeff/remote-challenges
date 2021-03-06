/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaudet <hbaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:10:35 by hbaudet           #+#    #+#             */
/*   Updated: 2020/01/03 11:10:03 by hbaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	t_uint				i;
	const unsigned char	*tmp;
	unsigned char		d;

	i = 0;
	tmp = s;
	d = (unsigned char)c;
	while (i < n)
	{
		if (tmp[i] == d)
			return ((void *)&tmp[i]);
		i++;
	}
	return (NULL);
}
