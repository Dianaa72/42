/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 20:24:24 by dde-luca          #+#    #+#             */
/*   Updated: 2026/10/07 20:38:34 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int count_if(char *str) {
    int count = 0;
    while (*str) {
        if (*str == '1') {
            count++;
        }
        str++;
    }
    return count;
}
*/
int	ft_count_if(char **tab, int (*f)(char *))
{
	int	count;
	int	i;

	if (!tab)
		return (0);
	count = 0;
	i = -1;
	while (tab[++i])
	{
		if (f(tab[i]))
			count++;
	}
	return (count);
}
/*
#include <stdio.h>
int main(int ac, char **av)
{
	int count = ft_count_if(av+1, count_if);
	printf("%d\n", count);
	return 0;
}
*/