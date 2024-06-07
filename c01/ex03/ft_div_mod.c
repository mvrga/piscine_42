/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:14:34 by marcribe          #+#    #+#             */
/*   Updated: 2023/08/09 21:45:39 by marcribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	var1;
	int	var2;

	ft_div_mod(4, 2, &var1, &var2);
	var1 = var1 + '0';
	var2 = var2 + '0';
	write(1, &var1, 1);
	write(1, "\n", 1);
	write(1, &var2, 1);
}
