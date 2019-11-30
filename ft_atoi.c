/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: skhalil <skhalil@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 18:50:35 by skhalil        #+#    #+#                */
/*   Updated: 2019/11/30 15:08:25 by skhalil       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	isws_co(char *str, int *i)
{
	char c;

	c = str[*i];
	while ((c >= 9 && c <= 13) || c == ' ')
	{
		(*i)++;
		c = str[*i];
	}
}

int			ft_atoi(const char *str)
{
	int			i;
	long long	res;
	int			sign;
	int			overfl;

	sign = 1;
	i = 0;
	res = 0;
	isws_co((char *)str, &i);
	if (str[i] == '-' || str[i] == '+')
	{
		sign = 1 - 2 * (str[i] == '-');
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		res = res * 10 + str[i] - '0';
		overfl = (res > res * 10 + str[i] - '0') ? 1 : 0;
		i++;
	}
	if (sign == -1 && overfl == 1)
		return (0);
	if (overfl == 1)
		return (-1);
	return (sign * res);
}
