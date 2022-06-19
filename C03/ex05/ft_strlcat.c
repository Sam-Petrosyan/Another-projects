/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:07:29 by spetrosy          #+#    #+#             */
/*   Updated: 2022/02/23 12:36:41 by spetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;
	unsigned int	y;

	x = 0;
	while (dest[x])
		x++;
	i = 0;
	while (src[i] && i < size)
	{
		dest[x + i] = src[i];
		i++;
	}
	dest[x + i] = '\0';
	y = 0;
	while (src[y])
		y++;
	return (y);
}
