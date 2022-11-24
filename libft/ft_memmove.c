/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassnao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 23:18:31 by ohassnao          #+#    #+#             */
/*   Updated: 2022/10/19 20:40:42 by ohassnao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_cast;
	const char	*src_cast;

	dst_cast = (char *)dst;
	src_cast = (char const *)src;
	if (src_cast > dst_cast)
		ft_memcpy(dst_cast, src_cast, len);
	if (src_cast < dst_cast)
	{
		while (len)
		{
			len --;
			dst_cast[len] = src_cast[len];
		}
	}
	return (dst);
}
