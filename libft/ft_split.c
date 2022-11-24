/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassnao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:19:06 by hassnaoui         #+#    #+#             */
/*   Updated: 2022/10/22 12:52:55 by ohassnao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
		i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	first;
	size_t	last;
	size_t	i;

	if (!s)
		return (0);
	split = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!split)
		return (0);
	first = 0;
	i = 0;
	while (i < count_words(s, c))
	{
		while (s[first] == c)
			first++;
		last = first;
		while (s[last] != c && s[last])
			last++;
		split[i] = ft_substr(s, first, (last - first));
		first = last;
		i++;
	}
	split[i] = 0;
	return (split);
}
