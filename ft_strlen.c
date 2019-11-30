/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: skhalil <skhalil@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 14:24:06 by skhalil        #+#    #+#                */
/*   Updated: 2019/11/18 18:43:01 by skhalil       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t		ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}
