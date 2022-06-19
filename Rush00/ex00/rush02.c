/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 17:12:56 by spetrosy          #+#    #+#             */
/*   Updated: 2022/02/06 17:17:13 by spetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (++i <= y)
	{
		j = 0;
		while (++j <= x)
		{
			if ((i == 1 && j == 1) || (j == x && i == 1))
				ft_putchar('A');
			else if ((i == y && j == 1) || (i == y && j == x))
				ft_putchar('C');
			else if ((i == 1 || j == x) || (i == y || j == 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
	return (0);
}
