/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 13:01:06 by idavoli-          #+#    #+#             */
/*   Updated: 2021/08/24 23:33:19 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, unsigned int n)
{
	unsigned char *p;

	p = s;
	while (n-- > 0)
	{
		*p++ = '\0';
	}
}
