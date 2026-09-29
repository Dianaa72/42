/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 20:27:57 by dde-luca          #+#    #+#             */
/*   Updated: 2026/09/29 20:51:47 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_print_alphabet(void)
{
	char a;
	a = 'a';
	while(a <= 'z'){
		write(1, &a, 1);
		a++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return(0);
}
