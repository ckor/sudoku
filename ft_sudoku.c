/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudoku.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 20:13:31 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/17 00:18:17 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include			"ft_sudoku.h"

bool		ft_sudoku_try_line(int k, int grille[9][9], int i)
{
	int				j;

	j = 0;
	while (j < 9)
	{
		if (grille[i][j] == k)
			return (false);
		j++;
	}
	return (true);
}

bool		ft_sudoku_try_column(int k, int grille[9][9], int j)
{
	int				i;

	i = 0;
	while (i < 9)
	{
		if (grille[i][j] == k)
			return (false);
		i++;
	}
	return (true);
}

bool		ft_sudoku_try_block(int k, int grille[9][9], int i, int j)
{
	int				_i;
	int				_j;

	_i = (i - (i % 3));
	_j = (j - (j % 3));
	i = _i;
	while (i < (_i + 3))
	{
		j = _j;
		while (j < (_j + 3))
		{
			if (grille[i][j] == k)
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}

bool		ft_sudoku_resolve(int grille[9][9], int position)
{
	int				k;
	int				i;
	int				j;

	k = 1;
	i = (position / 9);
	j = (position % 9);
	if (position == 81)
		return (true);
	if (grille[i][j] != 0)
		return (ft_sudoku_resolve(grille, (position + 1)));
	while (k <= 9)
	{
		if (ft_sudoku_try_line(k, grille, i) &&
			ft_sudoku_try_column(k, grille, j) &&
			ft_sudoku_try_block(k, grille, i, j))
		{
			grille[i][j] = k;
			if (ft_sudoku_resolve(grille, (position + 1)) )
				return (true);
		}
		k++;
	}
	grille[i][j] = 0;
	return (false);
}

void		ft_sudoku_show_grid(int grille[9][9])
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			ft_putchar('0' + grille[i][j]);
			if (j != 8)
				ft_putchar(' ');
			j++;
		}
		j = 0;
		i++;
		ft_putchar('\n');
	}
}
