/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 20:54:43 by marcribe          #+#    #+#             */
/*   Updated: 2023/08/01 19:33:58 by marcribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	j;
	char	i;
	char	z;

	j = '0';
	while (j <= '7')
	{	
		(i = j + 1);
		while (i <= '8')
		{	
			(z = i + 1);
			while (z <= '9')
			{
				write(1, &j, 1);
				write(1, &i, 1);
				write(1, &z, 1);
				if (j != '7')
					write(1, ", ", 2);
				z++;
			}
			i++;
		}
		j++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
