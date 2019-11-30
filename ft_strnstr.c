/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: skhalil <skhalil@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 18:42:56 by skhalil        #+#    #+#                */
/*   Updated: 2019/11/18 15:05:34 by skhalil       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	co;
	int		ret;

	i = 0;
	co = 0;
	ret = 0;
	while (haystack[i] && i != len)
	{
		while (needle[co] == haystack[i + co] && needle[co] && (i + co) != len)
		{
			if (len - i - co != 0)
				ret = 1;
			co++;
		}
		if (ret == 1 && needle[co] != 0)
			return (0);
		else if (needle[co] == 0)
			return ((char *)&haystack[i]);
		co = 0;
		i++;
	}
	if (needle[0] == '\0')
		return ((char *)haystack);
	return (0);
}
