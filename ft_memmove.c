/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <jalwahei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:32:26 by jalwahei          #+#    #+#             */
/*   Updated: 2022/09/29 16:34:22 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// void	*ft_memmove(void *dst, const void *src, size_t n)
// {
// 	char	*ptrdst;
// 	char	*ptrsrc;
// 	size_t	i;

// 	ptrsrc = (char *) src;
// 	ptrdst = (char *) dst;
// 	i = 0;
// 	if (dst == NULL)
// 		return (NULL);
// 	else if (ptrdst < ptrsrc)
// 	{
// 		while (i < n)
// 		{
// 		ptrdst[i] = ptrsrc[i];
// 		i++;
// 		}
// 	}
// 		else
// 		{
// 			i = ft_strlen(ptrdst);
// 		while (i < n)
// 			{
// 		ptrdst[i] = ptrsrc[i];
// 		i--;
// 			}
// 		}
// 	return (dst);
// }
// int main()
// {
// 	char sc[] = "aabcd";
// 	char dt[] = "lool";
// 	printf( "%s", ft_memmove(sc,dt,4));
// 	// printf( "%s ", memmove(sc,dt,5));
// }
void	*ft_memmove(void *dst, const void *src, size_t n)
{
    char *pDest = (char *)dst;
    const char *pSrc =(const char*)src;
	char *tmp;
	tmp  = (char *)malloc(sizeof(char ) * n);

    if(NULL == tmp)
    {
        return (NULL);
    }
    else
    {
        size_t i = 0;
        while (i < n )
        {
            *(tmp + i) = *(pSrc + i);
			i++;
        }
		i=0;
        while ( i < n)
        {
            *(pDest + i) = *(tmp + i);
			i++;
        }
        free(tmp); 
    }
    return (dst);
}
// copy src to tmp array
//copy tmp to dest
//free allocated memory