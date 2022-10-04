/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <jalwahei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:31:54 by jalwahei          #+#    #+#             */
/*   Updated: 2022/10/03 19:07:19 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"
/*
DESCRIPTION
     The strcmp() and strncmp() functions lexicographically 
	 compare the nullerminated strings s1 and s2.
     The strncmp() function compares not more than n characters.
	  Because strncmp() is designed for comparing strings rather than 
	  binary data,characters that appear after a `\0' 
	  character are not compared.
RETURN VALUES
     The strcmp() and strncmp() functions return an 
	 integer greater than, equal to, or less than 0, according as 
	 the string s1 is greater than,
     equal to, or less than the string s2.
	 The comparison is done using unsigned characters,
	 so that `\200' is greater than `\0'.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s1[i] == s2[i] && (i < n - 1))
		i++;
	return (s1[i] - s2[i]);
}
// int main()
//  {	
// 	char str_cmp1[12] = "ABCDEFAQrSt";
// 	char str_cmp2[12] = "ABCDEFZQrSt";
// 	char empty[] = "";
// 	unsigned int ret;
// 	printf("Calling ft_strncmp(s1,s2,n);\n");
//     ret=ft_strncmp(str_cmp1,str_cmp2,6);
// 	if (ret == 0)
// 		printf("Comparing [s1] %s with [s2] %s n = 6 
// 		| PASS ret %d\n",str_cmp1,str_cmp2,ret);
// 	return (0);