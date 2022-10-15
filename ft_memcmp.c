/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <jalwahei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:07:26 by jalwahei          #+#    #+#             */
/*   Updated: 2022/10/13 19:37:39 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char		*alt1;
	unsigned const char		*alt2;

	alt1 = (unsigned const char *)s1;
	alt2 = (unsigned const char *)s2;
	while (n)
	{
		if (*alt1 != *alt2)
			return (*alt1 - *alt2);
		alt1++;
		alt2++;
		n--;
	}
	return (0);
}
