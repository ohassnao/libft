/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassnao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:12:17 by ohassnao          #+#    #+#             */
/*   Updated: 2022/10/28 15:37:54 by ohassnao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	a;

	str = (char *)s;
	a = (char)c;
	while (*str != a)
	{
		if (*str == '\0')
			return (0);
		str++;
	}
	return (str);
}
