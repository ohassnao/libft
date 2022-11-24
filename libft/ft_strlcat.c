/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassnao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:40:27 by hassnaoui         #+#    #+#             */
/*   Updated: 2022/10/20 17:57:09 by ohassnao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	size_dest;
	size_t	size_src;

	i = 0;
	if (!dest && !size)
		return (ft_strlen(src));
	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	if (size <= size_dest)
		return (size_src + size);
	else
	{
		while (src[i] && i < size - size_dest - 1)
		{
			dest[i + size_dest] = src[i];
			i++;
		}
		dest[i + size_dest] = '\0';
		return (size_dest + size_src);
	}
}
