/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:18:59 by spetrosy          #+#    #+#             */
/*   Updated: 2022/02/16 20:32:17 by spetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	x;
	int	y;

	i = 0;
	while (i < size - 1)
	{
		y = 0;
		while (y < size - i - 1)
		{
			if (tab[y] > tab[y + 1])
			{
				x = tab[y];
				tab[y] = tab[y + 1];
				tab[y + 1] = x;
			}
			y++;
		}
		i++;
	}
}
