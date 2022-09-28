/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <jalwahei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:37:27 by jalwahei          #+#    #+#             */
/*   Updated: 2022/09/28 03:13:09 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*altb;

	altb = (char *)b;
	if (b == NULL)
		return (NULL);
	while (*altb && len > 0 && len--)
	{
			*altb = c;
			altb++;
	}
	return (b);
}
//  pointer  dont change
// int main()
// {
//     char *str;
//     str = strdup("hello");
//     if (ft_memset((void *)str, 'a', 5))
//     {
//         printf("%s\n", str);
//     }
// }