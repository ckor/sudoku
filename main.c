/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 20:13:31 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/17 17:09:50 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"
#include "ft_sudoku.h"

int					main(int ac, char **av)
{
	int				grille[9][9];

	if (ac != 10 || !ft_args_lencheck(av, 9))
	{
		ft_putstr("Erreur\n");
		return (0);
	}
	ft_sudoku_init_grid(av, grille);
	if (!ft_sudoku_grid_is_valid(grille))
	{
		ft_putstr("Erreur\n");
		return (0);
	}
	if (ft_sudoku_resolve(grille, 0))
		ft_sudoku_show_grid(grille);
	else
		ft_putstr("Erreur\n");
	return (0);
}
