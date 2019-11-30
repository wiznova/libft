/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back_bonus.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: skhalil <skhalil@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 22:00:20 by skhalil        #+#    #+#                */
/*   Updated: 2019/11/09 14:37:16 by skhalil       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"
#include <stdlib.h>

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *last;

	if (new)
	{
		if (*alst == NULL)
			*alst = new;
		else
		{
			last = ft_lstlast(*alst);
			last->next = new;
		}
	}
}
