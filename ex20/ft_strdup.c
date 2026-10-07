/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 17:41:10 by dde-luca          #+#    #+#             */
/*   Updated: 2026/10/07 20:43:30 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*original;
	int		length;
	int		i;

	i = 0;
	if (!src)
		return (NULL);
	length = ft_strlen(src);
	original = malloc(sizeof(char) * (1 + length));
	if (!original)
		return (NULL);
	original[length] = '\0';
	while (src[i] != '\0' )
	{
		original[i] = src[i];
		i++;
	}
	return (original);
}

/*while (*src) { original[i] = *src; i++; src++; } */

/*int main(void)
{
	char *copia;
	copia = ft_strdup("NULL");
	printf("%s", copia);
}*/
