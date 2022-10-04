/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <jalwahei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 04:22:43 by jalwahei          #+#    #+#             */
/*   Updated: 2022/10/01 19:42:44 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"
// It will look for a character inside the string and returns
// character from that position of the character
void	*ft_memchr(const void *b, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	ch;

	ch = c;
	s = (unsigned char *)b;
	i = 0;
	while (i < n)
	{
		if (*s == ch)
		{
			return ((char *)s);
		}
		else
			s++;
	i++;
	}
	return (NULL);
}

// Looks for Chr and it finds and returns everything  afer the with the chr
// int	ft_strlen(char *str)
// {
// 	int	l;

// 	l = 0;
// 	while (*(str++) != '\0')
// 	{
// 		l++;
// 	}
// 	return (l);
// }

// int main()
// {
// const char str[] = "hehehehe.zehehehe";
//    const char ch = '.';
//    char *ret;

//    ret = memchr(str, ch, strlen(str));

//    printf("String after |%c| is - |%s|\n", ch, ret);
//  ret = ft_memchr(str, ch, ft_strlen(str));

//    printf("String after ftmem |%c| is - |%s|\n", ch, ret);

//    return(0);
// }