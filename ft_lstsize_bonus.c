/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: skhalil <skhalil@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 21:47:27 by skhalil        #+#    #+#                */
/*   Updated: 2019/11/10 19:17:33 by skhalil       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

int		ft_lstsize(t_list *lst)
{
	int		ret;
	t_list	**tmp;

	tmp = &lst;
	ret = 0;
	if (lst)
	{
		ret = 1;
		while ((**tmp).next != NULL)
		{
			*tmp = (**tmp).next;
			ret++;
		}
	}
	return (ret);
}
