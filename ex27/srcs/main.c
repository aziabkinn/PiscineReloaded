/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziabkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 20:12:45 by aziabkin          #+#    #+#             */
/*   Updated: 2018/03/20 21:58:31 by aziabkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int k;

	k = 0;
	while (str[k] != '\0')
	{
		ft_putchar(str[k]);
		k++;
	}
}

int		main(int argc, char **argv)
{
	int		fd;
	char	buf;

	if (argc == 1)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	if ((fd = open(argv[1], O_RDONLY)) == -1)
	{
		ft_putstr("Open error.\n");
		return (0);
	}
	while (read(fd, &buf, 1) != '\0')
		ft_putchar(buf);
	if (close(fd) == -1)
		return (0);
	return (0);
}
