/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 20:13:31 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/17 00:18:17 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include			"ft_utils.h"

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

void				ft_putnbr(int nbr)
{
	if (nbr < 0 && (nbr = -(nbr)))
		ft_putchar('-');
	if (nbr <= 9)
		ft_putchar('0' + nbr);
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

bool				ft_args_lencheck(char **av, int len)
{
	int				i;

	i = 1;
	while (av && av[i])
	{
		if (ft_strlen(av[i]) != len)
			return (false);
		i++;
	}
	return (av == NULL) ? (false) : (true);
}
