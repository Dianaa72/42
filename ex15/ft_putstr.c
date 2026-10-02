/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 15:48:09 by dde-luca          #+#    #+#             */
/*   Updated: 2026/10/02 18:57:02 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char a);/*{
    write(1, &a, 1);
}*/

void ft_putstr(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar('\n');
        ft_putchar(str[i]);
        i++;
    }
}
/*
void ft_putstr(char *str)
{
    while (*str)
    {
        ft_putchar('\n');
        ft_putchar(*str);
        str++;
    }
}*/


#include <stdio.h>

int main(void){
    char *a; //declarar variable 
    a = "abc"; //inicializar variable
    //char *PA = &a; 
    //*a == 'a';
    ft_putstr(a);
}