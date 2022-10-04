/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <jalwahei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:37:27 by jalwahei          #+#    #+#             */
/*   Updated: 2022/09/30 16:35:33 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*altb;

	size_t i = 0;
	altb = (unsigned char *)b;
	while (len > i)
	{
			altb[i] = c;
			i++;
	}
	return (b);
}
//  pointer  dont change
// int main()
// {
//     char *str;
//     str = strdup("hello");
//     if (memset((void *)str, 'A', 5))
//     {
//         printf("%s\n", str);
//     }
// }