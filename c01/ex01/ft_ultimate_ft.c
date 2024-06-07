/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:37:55 by marcribe          #+#    #+#             */
/*   Updated: 2023/08/08 22:42:16 by marcribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

/*int	main(void)
{
	int	nbr;
	int	*ptr_nbr1;
	int	**ptr_nbr2;
	int	***ptr_nbr3;
	int	****ptr_nbr4;
	int	*****ptr_nbr5;
	int	******ptr_nbr6;
	int	*******ptr_nbr7;
	int	********ptr_nbr8;
	int	div;
	int	mod;

	ptr_nbr1 = &nbr;
	ptr_nbr2 = &ptr_nbr1;
	ptr_nbr3 = &ptr_nbr2;
	ptr_nbr4 = &ptr_nbr3;
	ptr_nbr5 = &ptr_nbr4;
	ptr_nbr6 = &ptr_nbr5;
	ptr_nbr7 = &ptr_nbr6;
	ptr_nbr8 = &ptr_nbr7;
	ft_ultimate_ft(&ptr_nbr8);
	div = nbr / 10;
	mod = nbr % 10;
	div = div + '0';
	mod = mod + '0';
	write(1, &div, 1);
	write(1, &mod, 1);
}*/
