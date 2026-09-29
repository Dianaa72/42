/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 21:06:28 by dde-luca          #+#    #+#             */
/*   Updated: 2026/09/29 21:09:34 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void){
    int i;
    i = '1';
    while(i <= '9'){
        write(1, &i, 1);
        i++;
    }
}

int main(void){
    ft_print_numbers();
    return 0;
}