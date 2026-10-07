/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 20:58:27 by dde-luca          #+#    #+#             */
/*   Updated: 2026/10/07 20:47:00 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	resultado;

	resultado = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	resultado = nb;
	nb--;
	resultado = resultado * ft_recursive_factorial(nb);
	return (resultado);
}
/*#include  <stdio.h>
int main(void)
{
 printf("%d", ft_recursive_factorial(4));   
}*/