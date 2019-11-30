/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: skhalil <skhalil@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 13:31:06 by skhalil        #+#    #+#                */
/*   Updated: 2019/11/10 19:11:42 by skhalil       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dst_p;
	char	*src_p;

	dst_p = (char *)dst;
	src_p = (char *)src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst < src)
		while (i != len)
		{
			dst_p[i] = src_p[i];
			i++;
		}
	else
	{
		while (len != 0)
		{
			dst_p[len - 1] = src_p[len - 1];
			len--;
		}
	}
	return (dst);
}
