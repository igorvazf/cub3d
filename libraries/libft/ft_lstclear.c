/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvaz-fe <igvaz-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 12:14:01 by igvaz-fe          #+#    #+#             */
/*   Updated: 2021/08/11 13:37:10 by igvaz-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*holder;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		holder = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = holder;
	}
}
