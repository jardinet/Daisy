/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwragg <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 19:39:00 by mwragg            #+#    #+#             */
/*   Updated: 2016/11/16 08:15:49 by mwragg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = 1;
	while (i <= nb / 2 && nb > 0)
	{
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (0);
}
