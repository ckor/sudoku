/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudoku.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 20:13:31 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/17 17:38:10 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SUDOKU_H
# define FT_SUDOKU_H
# include "ft_utils.h"

void		ft_sudoku_init_grid(char **stab, int grille[9][9]);
t_bool		ft_sudoku_grid_is_valid(int grille[9][9]);
t_bool		ft_sudoku_try_line(int k, int grille[9][9], int i);
t_bool		ft_sudoku_try_column(int k, int grille[9][9], int j);
t_bool		ft_sudoku_try_block(int k, int grille[9][9], int i, int j);
t_bool		ft_sudoku_check_line(int grille[9][9], int position);
t_bool		ft_sudoku_check_column(int grille[9][9], int position);
t_bool		ft_sudoku_check_block(int grille[9][9], int position);
t_bool		ft_sudoku_resolve(int grille[9][9], int position);
void		ft_sudoku_show_grid(int grille[9][9]);
#endif
