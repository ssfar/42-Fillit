/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlouisia <qlouisia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 20:46:59 by qlouisia          #+#    #+#             */
/*   Updated: 2018/12/19 13:29:06 by qlouisia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "fillit.h"

void	print_tab(char **tab, int tab_size)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < tab_size)
	{
		while (x < tab_size)
		{
			ft_putchar(tab[x][y]);
			x++;
		}
		ft_putchar('\n');
		x = 0;
		y++;
	}
}

int		initial_map_size(int nb)
{
	nb = ft_sqrt(nb) * 2;
	return (rounded_sup(nb));
}
