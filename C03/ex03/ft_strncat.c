/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:13:53 by spetrosy          #+#    #+#             */
/*   Updated: 2022/02/22 18:27:10 by spetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	k = 0;
	while (k < nb && src[k])
	{
		dest[i + k] = src[k];
			k++;
	}
	dest[i + k] = '\0';
	return (dest);
}
