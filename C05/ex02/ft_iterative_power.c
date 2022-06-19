/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:17:11 by spetrosy          #+#    #+#             */
/*   Updated: 2022/02/24 16:01:16 by spetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
		return (0);
	if ((nb == 0 && power == 0)
		|| (nb == 1 && power == 1))
		return (1);
	while (power > 0)
	{
		i = i * nb;
		power--;
	}
	return (i);
}
