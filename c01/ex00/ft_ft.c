/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:41:29 by marcribe          #+#    #+#             */
/*   Updated: 2023/08/08 12:35:15 by marcribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*int	main(void)
{
	int	nbr;
	int	*ptr_nbr;
	int	div;
	int	mod;

	ptr_nbr = &nbr;
	ft_ft(ptr_nbr);
	div = nbr / 10;
	mod = nbr % 10;
	div = div + '0';
	mod = mod + '0';
	write(1, &div, 1);
	write(1, &mod, 1);
}*/
