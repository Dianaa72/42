/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 20:13:35 by dde-luca          #+#    #+#             */
/*   Updated: 2026/09/30 20:29:59 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a/b;
    *mod = a%b;
}


/*#include <stdio.h>
int main(void)
{
    int a = 7;
    int b = 2;
    int div;
    int mod;

    int *PDiv = &div;
    int *PMod = &mod;
    ft_div_mod(a,b,PDiv,PMod);
    printf("%d %d", *PDiv, *PMod);
}*/