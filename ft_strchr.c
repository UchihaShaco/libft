/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <jalwahei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:31:04 by jalwahei          #+#    #+#             */
/*   Updated: 2022/10/01 19:31:12 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
     The strchr() function locates the first occurrence of c 
		(converted to a char) in
     the string pointed to by s.  
		The terminating null character is considered to be
     part of the string; therefore if c is `\0',the functions 
		locate the terminating \0'.
     The strrchr() function is identical to strchr(),
	except it locates the last occur-
     rence of c.
RETURN VALUES
     The functions strchr() and strrchr() return a 
		pointer to the located character,
	or
     NULL if the character does not appear in the string.
*/

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	ch;

	ch = c;
	while (*str && (unsigned char)*str != ch)
		str++;
	if (ch == (unsigned char)*str)
		return ((char *)str);
		return (NULL);
}

// int main()
// {
//     const char string[] = "The string is wow";
//     int x = 'w';
//     const char *p;

//     p = ft_strchr(string, x);
//     printf("String starting from %c is: %s\n", x, p);
//     return (0);

// }