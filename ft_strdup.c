/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: skhalil <skhalil@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 18:37:39 by skhalil        #+#    #+#                */
/*   Updated: 2019/11/10 19:07:11 by skhalil       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*strcp;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen((char *)s1);
	strcp = (char *)malloc(len + 1);
	if (strcp == NULL)
		return (NULL);
	while (s1[i])
	{
		strcp[i] = s1[i];
		i++;
	}
	strcp[i] = '\0';
	return (strcp);
}
