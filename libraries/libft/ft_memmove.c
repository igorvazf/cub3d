/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvaz-fe <igvaz-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 14:47:57 by igvaz-fe          #+#    #+#             */
/*   Updated: 2021/08/07 18:14:12 by igvaz-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t	i;
	char	*ptr1;
	char	*ptr2;

	if (!str1 && !str2)
		return (NULL);
	i = 0;
	ptr1 = (char *) str1;
	ptr2 = (char *) str2;
	if (str2 < str1)
	{
		while (n-- > 0)
			ptr1[n] = ptr2[n];
	}
	else
	{
		while (i < n)
		{
			ptr1[i] = ptr2[i];
			i++;
		}
	}
	return (ptr1);
}
