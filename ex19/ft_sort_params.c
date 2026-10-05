/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 20:43:11 by dde-luca          #+#    #+#             */
/*   Updated: 2026/10/05 17:47:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>


   

int main(int argc, char **argv)
{
    int i;
    int j;
    i = 0;
    j = 1;
    char *burbuja;
    int pasadas;
    pasadas = 0;

    while(pasadas < )
    while (j < argc)
    {
        while (argv[j][i])
        {
            if(argv[j][i] - argv[j + 1][i] == 0 || argv[j][i] - argv[j + 1][i] < 0)
            {   
                i++;
            }else{
                burbuja = argv[j + 1];
                argv[j + 1] = argv[j];
                argv[j] = burbuja;
            } 
        }
        i = 0;
        j++;
    }

    j = 1;
    i = 0;
     while(j < argc){

        while(argv[j][i]){
            write(1, &argv[j][i], 1);
            i++;
        }
        write(1, "\n", 1);
        i = 0;
        j++;
    }
    return(0);
}
/*#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	int		sorted;
	char	*burbuja;

	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		j = 1;
		while (j < argc - 1)
		{
			i = 0;
			while (argv[j][i] && argv[j][i] == argv[j + 1][i])
				i++;
			if (argv[j][i] > argv[j + 1][i])
			{
				burbuja = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = burbuja;
				sorted = 0;
			}
			j++;
		}
	}
	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
	return (0);
} */