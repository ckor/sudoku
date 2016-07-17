/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 20:13:31 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/17 18:22:06 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

int					ft_strlen(char *str)
{
	int				len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void				ft_putchar(char c)
{
	write(1, &c, 1);
}

void				ft_putstr(char *str)
{
	int				len;

	len = ft_strlen(str);
	write(1, str, len);
}

void				ft_init_tab(int tab[10])
{
	int				i;

	i = 0;
	while (i < 10)
	{
		tab[i] = FALSE;
		i++;
	}
}

t_bool				ft_args_lencheck(char **av, int len)
{
	int				i;

	i = 1;
	while (av && av[i])
	{
		if (ft_strlen(av[i]) != len)
			return (FALSE);
		i++;
	}
	return (av == NULL) ? (FALSE) : (TRUE);
}
