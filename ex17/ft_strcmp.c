/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 19:13:03 by dde-luca          #+#    #+#             */
/*   Updated: 2026/10/02 20:12:03 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_strcmp(char *s1, char *s2)
{

    int i;
    i = 0;

    while (s1[i] != '\0' || s2[i] != '\0')
    {
        if (s1[i] - s2[i] == 0)
        {
            i++;
        }
        else
        {
            return(s1[i] - s2[i]);
        }
        
    }
    return(0);
    
}


#include <stdio.h>
int main(void){

    char *primero;
    char *segundo;
    primero = "ABC";
    segundo = "ABC";

    printf("%d",ft_strcmp(primero, segundo));
        
}