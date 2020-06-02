/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlastchr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-yah <hben-yah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 11:12:25 by hben-yah          #+#    #+#             */
/*   Updated: 2019/01/06 19:46:06 by hben-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlastchr(char *s)
{
	if (s)
	{
		if (*s)
		{
			while (*s)
				++s;
			return (s - 1);
		}
		return (s);
	}
	return (0);
}
