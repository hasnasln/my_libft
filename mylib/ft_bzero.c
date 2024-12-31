/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haslan <haslan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 13:21:37 by haslan            #+#    #+#             */
/*   Updated: 2023/10/22 15:06:39 by haslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *ptr, size_t n)
{
	unsigned char	*p;

	p = ptr;
	while (n)
	{
		*p = 0;
		p++;
		n--;
	}
}
