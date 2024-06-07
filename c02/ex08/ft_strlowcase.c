/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 00:46:20 by marcribe          #+#    #+#             */
/*   Updated: 2023/08/13 12:15:07 by marcribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*#include <stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*int   main ()
{
        char str1[] ="SEREMOSCADETES";
        char str2[] ="CADETE";

          printf("%s\n", ft_strlowcase(str1));
          printf("%s\n", ft_strlowcase(str2));
}*/
