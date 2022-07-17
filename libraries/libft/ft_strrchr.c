/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvaz-fe <igvaz-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 14:23:40 by igvaz-fe          #+#    #+#             */
/*   Updated: 2021/08/07 15:33:34 by igvaz-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*ptr;
	char	x;

	ptr = (char *)str;
	x = (char)c;
	i = ft_strlen(ptr);
	while (i >= 0)
	{
		if (ptr[i] == x)
			return (&ptr[i]);
		i--;
	}
	ptr = NULL;
	return (ptr);
}
