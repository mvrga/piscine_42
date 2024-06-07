/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 22:45:50 by marcribe          #+#    #+#             */
/*   Updated: 2023/08/09 12:54:40 by marcribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)

{
	int	var1;
	int	var2;

	var1 = 1;
	var2 = 2;
	ft_swap(&var1, &var2);
	var1 = var1 + '0';
	var2 = var2 + '0';
	write(1, &var1, 1);
	write(1, &var2, 1);
}*/
