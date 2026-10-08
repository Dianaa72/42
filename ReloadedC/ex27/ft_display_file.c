/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 15:57:51 by dde-luca          #+#    #+#             */
/*   Updated: 2026/10/08 16:11:00 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(char const *name)
{
	int		fd;
	int		byte_read;
	char	buf[1];

	fd = open(name, O_RDONLY);
	if (fd < 0)
		write(2, "Cannot read file.\n", 18);
	else
	{
		byte_read = read(fd, buf, sizeof(buf));
		while (byte_read > 0)
		{
			write(1, buf, sizeof(buf));
			byte_read = read(fd, buf, sizeof(buf));
		}
		close(fd);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_display_file(argv[1]);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		write(2, "File name missing.\n", 19);
	return (0);
}
