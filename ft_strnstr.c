/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <jalwahei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 23:33:19 by jalwahei          #+#    #+#             */
/*   Updated: 2022/10/05 15:41:50 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
 The strnstr() function locates the first occurrence of the null-terminated 
 string needle in the string haystack,
	where not more than len characters are searched.  Characters that appear
     after a `\0' character are not searched.  
	 Since the strnstr() function is a FreeBSD specific
     API, it should only be used when portability is not a concern.
RETURN VALUES
     If needle is an empty string,
	haystack is returned; if needle occurs nowhere in haystack, NULL
     is returned; otherwise a pointer to the first character of the 
	 first occurrence of needle is returned.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int	needle_len;

	needle_len = ft_strlen(needle);
	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (((needle_len == 0 && needle[i] && haystack[i]) 
	|| ft_strlen(haystack) == 0 || len == 0))
		return (NULL);
	if (needle_len == 0 || (ft_strlen(haystack) == 0 && len == 0))
		return ((char *)haystack);
	while (i <= (len - needle_len))
	{
		if ((0 == ft_strncmp(haystack, needle, needle_len)))
			return ((char *)haystack);
			i++;
			haystack++;
	}
	return (0);
}
// int main()
// {
//     char *ptr;
// 	char haystack[30] = "gfh";
//         char needle[10] = "sdf";
//     ptr = ft_strnstr(haystack, needle, 0);
// 	printf("Returning the string: %s \n", ptr);
// 	printf("Returning the string: %s \n", strnstr(haystack, needle, -1));
//     return (0);
// }
