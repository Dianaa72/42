/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 18:55:47 by dde-luca          #+#    #+#             */
/*   Updated: 2026/10/07 20:42:42 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	long	lenght;
	int		*array;
	int		i;

	i = 0;
	if (min > max)
	{
		return (NULL);
	}
	lenght = max - min;
	array = malloc(sizeof(int) * (lenght + 1));
	if (!array)
		return (NULL);
	while (i < lenght)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}

/*int	main(void)
{
	int	min;
	int	max;
	int	*resultado;
	int	i;

	i = 0;
	min = -20;
	max = 20;


	resultado = ft_range(min, max);

	while (i < max - min)
	{
		printf("%d - ", resultado[i]);
		i++;
	}
}*/