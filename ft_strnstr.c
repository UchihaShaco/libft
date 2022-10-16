/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <jalwahei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 23:33:19 by jalwahei          #+#    #+#             */
/*   Updated: 2022/10/16 16:31:13 by jalwahei         ###   ########.fr       */
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
	size_t	hay_len;
	size_t	need_len;

	if (*needle == '\0' )
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	hay_len = ft_strlen(haystack);
	need_len = ft_strlen(needle);
	if (hay_len < need_len || len < need_len)
		return (NULL);
	while (len-- >= need_len && *haystack)
	{
		if (ft_memcmp(haystack, needle, need_len) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
// int main()
// {
//     // char *ptr;
// 	// char haystack[30] = "gfh";
//     //     char needle[10] = "sdf";
//     // ptr = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0);
// 	printf("Returning the string: %s \n", 
//ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0));
// 	printf("Returning the string: %s \n", 
//strnstr("lorem ipsum dolor sit amet", "dolor", 0));
//     return (0);
// }
