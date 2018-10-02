/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clingier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 20:31:56 by clingier          #+#    #+#             */
/*   Updated: 2018/10/02 06:40:21 by clingier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putstr(char *str, int stdout)
{
	while (*str)
		write(stdout, str++, 1);
}

int		main(int argc, char **argv)
{
	int		fd;
	char	buf;

	if (argc == 1)
		ft_putstr("File name missing.\n", 2);
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		while (read(fd, &buf, 1))
			write(1, &buf, 1);
	}
	if (argc != 2 && argc != 1)
		ft_putstr("Too many arguments.\n", 2);
	return (0);
}
