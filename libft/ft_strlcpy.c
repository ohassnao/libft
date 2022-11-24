/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassnao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:21:10 by hassnaoui         #+#    #+#             */
/*   Updated: 2022/10/28 15:36:56 by ohassnao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	char	*cast_src;

	cast_src = (char *)src;
	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	if (size > 0)
	{
		while (cast_src[i] && i < size - 1)
		{
			dst[i] = cast_src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
