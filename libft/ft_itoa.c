/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassnao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 23:01:52 by hassnaoui         #+#    #+#             */
/*   Updated: 2022/10/29 17:28:36 by ohassnao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_of_char(int n)
{
	int				i;
	unsigned int	num;

	i = 1;
	num = n;
	if (n < 0)
	{
	i = 2;
	num = -n;
	}
	while (num > 9)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int				i;
	unsigned int	num;
	char			*tab;

	tab = (char *)malloc((num_of_char(n) + 1) * sizeof(char));
	if (!tab)
		return (0);
	i = num_of_char(n);
	num = n;
	if (n < 0)
	{
		num = -n;
		tab[0] = '-';
	}
	tab[i] = 0;
	tab[i - 1] = '0';
	while (num > 0)
	{
		i--;
		tab[i] = num % 10 + '0';
		num = num / 10;
	}
	return (tab);
}
