/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 20:43:11 by dde-luca          #+#    #+#             */
/*   Updated: 2026/10/07 20:44:12 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

/*
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
            if(argv[j][i] - argv[j + 1][i] == 0 || argv[j][i] - argv[j + 1][i]
			 < 0)
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
}*/

//#include <unistd.h>

void	ft_putchar(char c);

void	ft_print(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
			ft_putchar(argv[j][i++]);
		ft_putchar('\n');
		j++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*tmp;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			k = 0;
			while (argv[i][k] && argv[i][k] == argv[j][k])
				k++;
			if (argv[i][k] > argv[j][k])
			{
				tmp = argv[i];
				argv[i] = argv[j];
				argv[j] = tmp;
			}
			j++;
		}
		i++;
	}
	ft_print(argc, argv);
}
