/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwragg <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 19:12:50 by mwragg            #+#    #+#             */
/*   Updated: 2016/11/16 10:53:26 by mwragg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int range;
	int i;

	i = 0;
	if (max < min || min == max)
		return (NULL);
	range = max - min;
	tab = malloc(sizeof(int) * (range));
	while (i < range)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
