/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 21:06:28 by dde-luca          #+#    #+#             */
/*   Updated: 2026/10/07 20:48:46 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int a);

void	ft_print_numbers(void)
{
	int	i;

	i = '1';
	while (i <= '9')
	{
		ft_putchar(i);
		i++;
	}
}
/*
int main(void){
    ft_print_numbers();
    return 0;
}*/