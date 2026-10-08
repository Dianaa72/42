/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 20:24:24 by dde-luca          #+#    #+#             */
/*   Updated: 2026/10/08 15:54:58 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	count;
	int	i;

	if (!tab)
		return (0);
	count = 0;
	i = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}

/*#include <stdio.h>
int main(int ac, char **av)
{
	int count = ft_count_if(av+1, count_if);
	printf("%d\n", count);
	return 0;
}*/
