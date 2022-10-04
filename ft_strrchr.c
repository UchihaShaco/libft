/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <jalwahei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 07:04:57 by jalwahei          #+#    #+#             */
/*   Updated: 2022/10/03 18:58:56 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Looks for a specific character but the last 
makcharacter inside that string and returns that character/string
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
