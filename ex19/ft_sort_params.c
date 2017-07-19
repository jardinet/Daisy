/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwragg <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 20:40:41 by mwragg            #+#    #+#             */
/*   Updated: 2016/11/11 19:06:26 by mwragg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

void	ft_swap(char **a, char **b)
{
	char	*bol;

	bol = NULL;
	bol = *a;
	*a = *b;
	*b = bol;
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	return (0);
}

void	ft_sort(int ac, char **argv)
{
	int i;

	i = 0;
	while (i + 1 < ac && ac > 2)
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			ft_swap(&argv[i], &argv[i + 1]);
			i = 0;
		}
		else
			i++;
}

int		main(int ac, char **argv)
{
	int	i;

	i = 1;
	ft_sort(ac - 1, &argv[1]);
	while (i < ac)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
