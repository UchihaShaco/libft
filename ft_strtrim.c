/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <jalwahei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:51:43 by jalwahei          #+#    #+#             */
/*   Updated: 2022/10/07 23:20:23 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <string.h>

char	ft_trim(char c, char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *str1, char const *str2)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	if (!str1 || !str2)
		return (0);
	start = 0;
	while (str1[start] && ft_trim(str1[start], str2))
		start++;
	end = ft_strlen(str1);
	while (end > start && ft_trim(str1[end - 1], str2))
		end--;
	str = (char *)malloc(sizeof(*str1) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = str1[start++];
	str[i] = 0;
	return (str);
}
// #include <string.h>
// int main()
// {
//     char *str1 = "cdjafarcd";
//     char *str2 = "dc";
//     printf("%d\n", strcmp("tripouille" , 
// ft_strtrim("tripouille   xxx", " x")));
//     return (0);
// }
