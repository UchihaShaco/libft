/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <jalwahei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:32:26 by jalwahei          #+#    #+#             */
/*   Updated: 2022/09/30 17:05:00 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// void	*ft_memmove(void *dst, const void *src, size_t n)
// {
//     char *pDest = (char *)dst;
//     const char *pSrc =(const char*)src;
// 	char *tmp;
// 	tmp  = (char *)malloc(sizeof(char ) * n);

//     if(NULL == tmp)
//     {
//         return (NULL);
//     }
//     else
//     {
//         size_t i = 0;
//         while (i < n )
//         {
//             *(tmp + i) = *(pSrc + i);
// 			i++;
//         }
// 		i=0;
//         while ( i < n)
//         {
//             *(pDest + i) = *(tmp + i);
// 			i++;
//         }
//         free(tmp); 
//     }
//     return (dst);
// }

/*
** Copies len bytes from string src to string dst.
** The two strings may overlap;
** The copy is always done in a non-destructive manner.
** Returns the original value of dst.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (NULL);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		while (len--)
			((char *)dst)[len] = ((char *)src)[len];
	}
	return (dst);
}

// copy src to tmp array
//copy tmp to dest
//free allocated memory