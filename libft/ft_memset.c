/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassnao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:18:17 by ohassnao          #+#    #+#             */
/*   Updated: 2022/10/29 18:16:37 by ohassnao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buffer, int c, size_t len)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)buffer;
	i = 0;
	while (i < len)
		p[i++] = c;
	return (buffer);
}
