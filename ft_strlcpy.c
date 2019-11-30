/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: skhalil <skhalil@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 14:36:25 by skhalil        #+#    #+#                */
/*   Updated: 2019/11/18 18:55:51 by skhalil       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		stopper;

	i = 0;
	stopper = 0;
	if (dstsize == 0)
		return (ft_strlen((char *)src));
	if (!dst || !src)
		return (0);
	if (src[0] == '\0')
	{
		dst[stopper] = '\0';
		return (i);
	}
	while (src[i])
	{
		if (i <= dstsize - 2)
		{
			dst[i] = src[i];
			stopper = i;
		}
		i++;
	}
	dst[stopper + 1] = '\0';
	return (i);
}
