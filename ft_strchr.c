/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: skhalil <skhalil@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 15:18:41 by skhalil        #+#    #+#                */
/*   Updated: 2019/10/28 18:25:42 by skhalil       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*ret;
	char	letter;

	letter = c;
	i = 0;
	while (str[i] != letter && str[i] != '\0')
		i++;
	ret = (char *)&str[i];
	if (letter == '\0')
		return (ret);
	else if (str[i] == '\0')
		return (0);
	return (ret);
}
