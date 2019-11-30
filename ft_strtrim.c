/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: skhalil <skhalil@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/02 18:33:49 by skhalil        #+#    #+#                */
/*   Updated: 2019/11/18 13:13:03 by skhalil       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tstr;
	int		start;
	int		end;
	int		i;

	if (!s1 || !set)
		return (0);
	start = 0;
	i = 0;
	end = ft_strlen((char *)s1);
	while (s1[i] && ft_strchr(set, s1[i]) != NULL)
		i++;
	start = i;
	if (start == end)
		return (ft_calloc(1, 1));
	i = end - 1;
	while (s1[i] && ft_strchr(set, s1[i]) != NULL)
		i--;
	end = i;
	tstr = ft_substr(s1, start, end - start + 1);
	return (tstr);
}
