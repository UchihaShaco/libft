/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <jalwahei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 19:34:01 by jalwahei          #+#    #+#             */
/*   Updated: 2022/10/01 19:12:17 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
// Copies all the data from the source to the destination

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*ptrdst;
	char	*ptrsrc;
	size_t	i;

	ptrsrc = (char *) src;
	ptrdst = (char *) dst;
	i = 0;
	if (dst == NULL)
		return (NULL);
	while (i < n)
	{
		ptrdst[i] = ptrsrc[i];
		i++;
	}
	return (dst);
}
// int main ()
// {
//   char str1[] = "Geeee"; 
//   char str2[] = "Kiiz"; 
//   puts("str1 before memcpy ");
//   puts(str1);
//   ft_memcpy(str1, str2, sizeof(str2));
//   puts("\nstr1 after memcpy ");
//   puts(str1);
//   return 0;
// }