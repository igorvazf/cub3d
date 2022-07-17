/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvaz-fe <igvaz-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 14:34:46 by igvaz-fe          #+#    #+#             */
/*   Updated: 2021/08/07 15:02:36 by igvaz-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	set_search(char s, char const *set)
{
	unsigned int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s)
			return (1);
		i++;
	}
	return (3);
}

static unsigned int	verification(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	found;

	i = 0;
	found = 0;
	while (s1[i] && found != 3)
	{
		found = set_search(s1[i], set);
		if (found == 1)
			i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	setleft;
	unsigned int	setright;
	unsigned int	found;
	unsigned int	i;

	if (!s1 || !set)
		return (NULL);
	setleft = verification(s1, set);
	setright = ft_strlen(s1);
	found = 0;
	i = 0;
	while ((setright > setleft) && found != 3)
	{
		found = set_search(s1[setright - 1], set);
		if (found == 1)
			setright--;
	}
	str = malloc((setright - setleft) * sizeof(char) + 1);
	if (!str)
		return (NULL);
	while (setleft < setright)
		str[i++] = s1[setleft++];
	str[i] = '\0';
	return (str);
}
