/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: skhalil <skhalil@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 16:24:14 by skhalil        #+#    #+#                */
/*   Updated: 2019/11/18 18:41:33 by skhalil       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = ft_strlen((char *)dst);
	slen = ft_strlen((char *)src);
	i = 0;
	if (dlen >= dstsize)
		return (dstsize + slen);
	while (dlen + i < dstsize - 1 && src[i])
	{
		dst[dlen + i] = src[i];
		i++;
	}
	if (src[i] == '\0')
	{
		dst[dlen + i] = '\0';
		return (dlen + i);
	}
	if (dlen + i == dstsize - 1)
	{
		dst[dlen + i] = '\0';
		return (dlen + slen);
	}
	return (dlen + slen);
}
