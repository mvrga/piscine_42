/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 21:49:13 by marcribe          #+#    #+#             */
/*   Updated: 2023/08/10 20:20:05 by marcribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int	main(void)
{
	int	semi1;
	int	semi2;

	semi1 = 1;
	semi2 = 2;
	ft_ultimate_div_mod(&semi1, &semi2);
	semi1 = semi1 + '0';
	semi2 = semi2 + '0';
	write(1, &semi1, 1);
	write(1, "\n", 1);
	write(1, &semi2, 1);
}*/
