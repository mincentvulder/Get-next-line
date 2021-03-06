/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_getdigits.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: vmulder <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/25 13:00:02 by vmulder       #+#    #+#                 */
/*   Updated: 2019/01/25 13:07:30 by vmulder       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_getdigits(int c)
{
	int i;

	i = 1;
	if (c < 0)
	{
		c *= -1;
		i += 1;
	}
	while (c >= 10)
	{
		c /= 10;
		i++;
	}
	return (i);
}
