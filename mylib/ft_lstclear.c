/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haslan <haslan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:41:32 by haslan            #+#    #+#             */
/*   Updated: 2023/10/22 15:22:17 by haslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*box;

	if (!lst || !del)
		return ;
	while (*lst != 0)
	{
		box = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		(*lst) = box;
	}
	*lst = 0;
}
