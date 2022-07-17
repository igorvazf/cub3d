/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvaz-fe <igvaz-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 16:41:56 by igvaz-fe          #+#    #+#             */
/*   Updated: 2021/07/30 13:04:27 by igvaz-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;
	size_t	len_dst;

	len = ft_strlen(dst) + ft_strlen(src);
	i = 0;
	len_dst = ft_strlen(dst);
	if (size < ft_strlen(dst))
		return (ft_strlen(src) + size);
	while ((len_dst + 1) < size && src[i])
	{
		dst[len_dst] = src[i];
		len_dst++;
		i++;
	}
	if (len_dst != size)
		dst[len_dst] = '\0';
	return (len);
}
