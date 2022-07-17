/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvaz-fe <igvaz-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 15:13:56 by igvaz-fe          #+#    #+#             */
/*   Updated: 2021/08/07 17:00:52 by igvaz-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	char	*ptr;
	char	x;

	i = 0;
	ptr = (char *)str;
	x = (char)c;
	while (i < n)
	{
		if (ptr[i] == x)
			return (&ptr[i]);
		i++;
	}
	ptr = NULL;
	return (ptr);
}
