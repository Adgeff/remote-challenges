/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btsp.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theorder <theorder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 15:45:59 by theorder          #+#    #+#             */
/*   Updated: 2020/06/02 15:52:02 by theorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	int		x;
	int		y;
	char	c;

	x = -1;
	y = -1;
	while (42)
	{
		x = (x + 1) % 10;
		if (x == 0)
			y = (y + 1) % 10;
		c = y + 'A';
		write(1, &c, 1);
		c = x + '0';
		write(1, &c, 1);
		write(1, "\n", 1);
		read(0, 0, 10);
	}
	return (0);
}
