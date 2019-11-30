/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: skhalil <skhalil@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 19:43:08 by skhalil        #+#    #+#                */
/*   Updated: 2019/11/10 19:12:27 by skhalil       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dst_p;
	char	*src_p;

	dst_p = (char *)dst;
	src_p = (char *)src;
	i = 0;
	if (dst_p == NULL && src_p == NULL)
		return (dst);
	while (i - n != 0)
	{
		dst_p[i] = src_p[i];
		i++;
	}
	return (dst);
}
