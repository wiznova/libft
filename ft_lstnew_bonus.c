/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: skhalil <skhalil@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 21:19:55 by skhalil        #+#    #+#                */
/*   Updated: 2019/11/10 19:08:19 by skhalil       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*ret;

	ret = (t_list *)malloc(sizeof(*ret));
	if (ret)
	{
		ret->content = content;
		ret->next = NULL;
	}
	return (ret);
}
