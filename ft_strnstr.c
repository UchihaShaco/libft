/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <jalwahei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 23:33:19 by jalwahei          #+#    #+#             */
/*   Updated: 2022/09/27 23:54:32 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** DESCRIPTION:
** 		The strnstr() function locates the first occurrence of the null-termi-
**	nated string s2 in the string s1, where not more than n characters are
**	searched.  Characters that appear after a `\0' character are not
**	searched.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	size_t	needle_len;

		needle_len = strnlen(needle, len);
		i = 0;
	if (needle_len == 0)
		return ((char *)haystack);
	while (i <= (int)(len - needle_len))
	{
		if ((haystack[0] == needle[0]) && (0 == ft_strncmp
				(haystack, needle, needle_len)))
			return ((char *)haystack);
						i++;
						haystack++;
	}
	return (NULL);
}