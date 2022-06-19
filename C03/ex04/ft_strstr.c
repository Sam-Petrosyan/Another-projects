/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:33:38 by spetrosy          #+#    #+#             */
/*   Updated: 2022/02/23 19:18:07 by spetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		x = 0;
		while (str[i + x] == to_find[x])
		{
			if (to_find[x + 1] == '\0')
				return (str + 1);
				x++;
		}
		i++;
	}
	return (str);
}
