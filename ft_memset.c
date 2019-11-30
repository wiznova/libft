/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: skhalil <skhalil@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 18:14:01 by skhalil        #+#    #+#                */
/*   Updated: 2019/11/10 19:07:51 by skhalil       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	ch;
	unsigned int	i;
	char			*str;

	str = (char *)b;
	i = 0;
	ch = (unsigned char)c;
	while (i != len)
	{
		str[i] = ch;
		i++;
	}
	return (b);
}
