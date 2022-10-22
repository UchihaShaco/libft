/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <jalwahei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:52:51 by jalwahei          #+#    #+#             */
/*   Updated: 2022/10/19 14:42:40 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*s;
	size_t		j;
	size_t		k;

	if (!s1 || !s2)
		return (NULL);
	s = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s)
		return (NULL);
	k = 0;
	j = 0;
	while (s1[j] != '\0')
		s[k++] = s1[j++];
	j = 0;
	while (s2[j] != '\0')
		s[k++] = s2[j++];
	s[k] = '\0';
	return (s);
}
// int main()
// {
//     char str1[] = "Welcome to ";
//     char str2[] = "the world of Fifa 2020";

//     printf("The string is : %s\n", ft_strjoin(str1, str2));
//     return (0);
// }