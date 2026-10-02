/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 20:12:42 by dde-luca          #+#    #+#             */
/*   Updated: 2026/10/02 20:38:35 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 0;
    j = 1;
    
    while(j < argc)
    {
        while(argv[j][i])
        {
            write(1, &argv[j][i], 1);
            i++;
        }
        write(1, "\n", 1);
        i = 0;
        j++;
    }
    return(0);
}