/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 20:13:31 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/17 18:21:33 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H
# include <stdlib.h>
# include <unistd.h>
# define TRUE		1
# define FALSE		0

typedef	int				t_bool;
int						ft_strlen(char *str);
void					ft_putchar(char c);
void					ft_putstr(char *str);
void					ft_init_tab(int tab[10]);
t_bool					ft_args_lencheck(char **av, int len);
#endif
