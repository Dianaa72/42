/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 00:55:40 by dde-luca          #+#    #+#             */
/*   Updated: 2026/10/01 02:16:32 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{

    int i = 0;
    if (nb > 0)
    {
        if (nb == 1)
        {
            return (1);
        }
        else
        {
            while (i < nb)
            {
                if (i * i == nb)
                {
                    return (i);
                }
                else
                {
                    i++;
                }
            }
        }
     
    }
     return (0);
}

#include <stdio.h>

int main(void)
{
    printf("%d", ft_sqrt(81));
}