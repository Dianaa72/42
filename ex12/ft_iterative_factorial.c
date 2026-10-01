/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 20:30:48 by dde-luca          #+#    #+#             */
/*   Updated: 2026/09/30 20:57:36 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int resultado;
    resultado = 1;
    
    if (nb < 0)
    {
        return(0);
    }

    while (nb > 0){
        resultado =  resultado * nb;
        nb--;
    }

    return(resultado);  
}

/*#include <stdio.h>
int main(void)
{

ft_iterative_factorial(4);
printf("%d",ft_iterative_factorial(4));
}*/