/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 20:13:31 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/17 00:18:17 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef					FT_UTILS_H
# define				FT_UTILS_H
# include				<stdlib.h>
# include				<unistd.h>
# define				true		1
# define				false		0
typedef	unsigned int	bool;
int						ft_strlen(char *str);
void					ft_putchar(char c);
void					ft_putstr(char *str);
void					ft_putnbr(int nbr);
bool					ft_args_lencheck(char **av, int len);
#endif
