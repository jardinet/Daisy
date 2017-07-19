/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwragg <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 21:42:57 by mwragg            #+#    #+#             */
/*   Updated: 2016/11/16 06:30:52 by mwragg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int		ft_display(char *file)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if ((fd = open(file, O_RDONLY)) == -1)
		return (1);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
		return (1);
	return (0);
}

int		main(int ac, char **argv)
{
	if (ac == 2)
	{
		if (ft_display(argv[1]) == 1)
			return (1);
		return (0);
	}
	if (ac == 1)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (ac > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	return (0);
}
