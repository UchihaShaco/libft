/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <jalwahei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 07:04:57 by jalwahei          #+#    #+#             */
/*   Updated: 2022/10/06 19:51:54 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
 The strrchr() function is identical to strchr(),
	except it locates the last occurrence of c.
*/

char	*ft_strrchr(const char *s, int c)
{
	while (*s)
	s++;
	while (*s >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
	}
	return (0);
}
