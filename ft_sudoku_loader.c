/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudoku_loader.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 20:13:31 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/17 18:23:36 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sudoku.h"

void		ft_sudoku_init_grid(char **stab, int grille[9][9])
{
	int				i;
	int				j;

	i = 1;
	while (i <= 9)
	{
		j = 0;
		while (j < 9 && stab[i][j])
		{
			if (stab[i][j] == '.')
				grille[i - 1][j] = 0;
			else
				grille[i - 1][j] = (int)(stab[i][j] - '0');
			j++;
		}
		i++;
	}
}

t_bool		ft_sudoku_check_line(int grille[9][9], int position)
{
	t_bool	check[10];
	int		i;
	int		j;

	i = (position / 9);
	j = 0;
	ft_init_tab(check);
	while (j < 9)
	{
		if (grille[i][j] < 0 || grille[i][j] > 9 || (check[grille[i][j]]))
			return (FALSE);
		if (grille[i][j] != 0)
			check[grille[i][j]] = TRUE;
		j++;
	}
	return (TRUE);
}

t_bool		ft_sudoku_check_column(int grille[9][9], int position)
{
	t_bool	check[10];
	int		i;
	int		j;

	i = 0;
	j = (position % 9);
	ft_init_tab(check);
	while (i < 9)
	{
		if (grille[i][j] < 0 || grille[i][j] > 9 || (check[grille[i][j]]))
			return (FALSE);
		if (grille[i][j] != 0)
			check[grille[i][j]] = TRUE;
		i++;
	}
	return (TRUE);
}

t_bool		ft_sudoku_check_block(int grille[9][9], int position)
{
	t_bool	check[10];
	int		i;
	int		j;
	int		min_i;
	int		min_j;

	ft_init_tab(check);
	min_i = ((position / 9) - ((position / 9) % 3));
	min_j = ((position % 9) - ((position % 9) % 3));
	i = min_i;
	while (i < (min_i + 3))
	{
		j = min_j;
		while (j < (min_j + 3))
		{
			if (grille[i][j] < 0 || grille[i][j] > 9 || (check[grille[i][j]]))
				return (FALSE);
			if (grille[i][j] != 0)
				check[grille[i][j]] = TRUE;
			j++;
		}
		i++;
	}
	return (TRUE);
}

t_bool		ft_sudoku_grid_is_valid(int grille[9][9])
{
	int		position;

	position = 0;
	while (position < 81)
	{
		if (!ft_sudoku_check_line(grille, position) ||
			!ft_sudoku_check_column(grille, position) ||
			!ft_sudoku_check_block(grille, position))
		{
			return (FALSE);
		}
		position++;
	}
	return (TRUE);
}
