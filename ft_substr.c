/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <jalwahei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:36:02 by jalwahei          #+#    #+#             */
/*   Updated: 2022/10/07 23:20:48 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	strin_len;
	size_t	size;
	char	*sub_str;

	if (!s)
		return (NULL);
	strin_len = ft_strlen(s);
	if (start > strin_len)
		return (ft_strdup(""));
	if (start + len > strin_len)
		len = strin_len - start;
	size = len + 1;
	sub_str = (char *) malloc(size * sizeof(char));
	if (!sub_str)
		return (NULL);
	ft_memcpy(sub_str, s + start, len);
	sub_str[len] = '\0';
	return (sub_str);
}
// get the length of the destination string
// extracts characters between start and length index from source string
// and copy them into the destination string
// int main()
// {
//     char str1[] = "Welcome to Qatar World Cup 2021";
//     // int start = 5;
//     char *dest = ft_substr(str1, 5, 10);
//     printf("My string : %s\n", dest);
//     return(0);
// }