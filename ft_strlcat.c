/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <jalwahei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 07:20:53 by jalwahei          #+#    #+#             */
/*   Updated: 2022/10/13 20:01:09 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION:
** 		The strlcpy() and strlcat() functions copy and concatenate strings
**	respectively.  They are designed to be safer, more consistent, and less
**	error prone replacements for strncpy(3) and strncat(3).  Unlike those
**	functions, strlcpy() and strlcat() take the full size of the buffer (not
**	just the length) and guarantee to NUL-terminate the result (as long as
**	size is larger than 0 or, in the case of strlcat(), as long as there is
**	at least one byte free in dst).  Note that you should include a byte for
**	the NUL in size.  Also note that strlcpy() and strlcat() only operate on
**	true ``C'' strings.  This means that for strlcpy() src must be NUL-termi-
**	nated and for strlcat() both src and dst must be NUL-terminated.
** 		The strlcat() function appends the NUL-terminated string src to the end
**	of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-termi
**	nating the result.
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	scount;
	size_t	dlen;

	dlen = ft_strlen(dst);
	if (dlen >= dstsize)
		return (ft_strlen(src) + dstsize);
	scount = 0;
	while (src[scount] != '\0' && dlen + 1 < dstsize)
	{
	dst[dlen] = src[scount];
	scount++;
	dlen++;
	}
	dst[dlen] = '\0';
	return (ft_strlen(&src[scount]) + dlen);
}

// int main()
// {
// 	char src[] = "lorem ipsum dolor sit amet";
// 	char dest[]= "a";

// 	printf("Dest Before: %s\n", dest);
// 	printf("Dest after : %zu\n", ft_strlcat(dest, src, 6));
// 	printf("Dest after : %s\n", dest);

// 	return (0);
// }
