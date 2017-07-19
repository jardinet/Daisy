/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_fctorial.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwragg <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 14:25:59 by mwragg            #+#    #+#             */
/*   Updated: 2016/11/08 14:43:23 by mwragg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	resultat;

	i = 1;
	resultat = 1;
	if (nb > 12 || nb < 0)
		return (0);
	while (i <= nb)
	{
		resultat = resultat * i;
		i++;
	}
	return (resultat);
}
