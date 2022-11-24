/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassnao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:08:52 by hassnaoui         #+#    #+#             */
/*   Updated: 2022/10/29 17:17:56 by ohassnao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	debut;
	size_t	fin;
	size_t	i;

	if (!s1)
		return (0);
	debut = 0;
	fin = ft_strlen(s1);
	while (s1[debut] && check(s1[debut], set))
		debut++;
	while (fin > debut && check(s1[fin - 1], set))
		fin--;
	trim = malloc(sizeof(char) * (fin - debut + 1));
	if (!trim)
		return (0);
	i = 0;
	while (debut < fin)
	{
		trim[i] = s1[debut];
		i++;
		debut++;
	}
	trim[i] = 0;
	return (trim);
}
