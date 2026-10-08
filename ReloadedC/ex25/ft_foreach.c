/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 20:24:18 by dde-luca          #+#    #+#             */
/*   Updated: 2026/10/08 14:39:11 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*void ft_putnbr(int n)
{
    // ...
}*/
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	if (!tab)
		return ;
	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*#include <stdio.h>
int main(void)
{
	int tab[] = {10, 20, 30};
	printf("%d", ft_foreach(tab, 3, &ft_putnbr))
}*/