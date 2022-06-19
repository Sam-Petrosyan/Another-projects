/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:48:38 by spetrosy          #+#    #+#             */
/*   Updated: 2022/02/23 20:20:39 by spetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = nb;
	if (i > i * nb)
		return (0);
	else if (power > 1)
		return (i * ft_recursive_power(i, power -1));
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (i);
}
