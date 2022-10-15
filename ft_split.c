/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <jalwahei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:43:29 by jalwahei          #+#    #+#             */
/*   Updated: 2022/10/13 20:05:45 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//A function to find the total amount of storage space required 
//when the string s is divided based on the letter c.
size_t	ft_wordcount(char const *s, char c)
{
	size_t	listsize;
	size_t	i;

	i = 0;
	listsize = 0;
	while (s[i] != '\0')
	{
		if ((i == 0 && s[i] != c) || \
		(s[i] == c && s[i + 1] != '\0' && s[i + 1] != c))
			listsize++;
		i++;
	}
	return (listsize);
}

char	**ft_split(char const *s, char c)
{
	char	**strlist;
	size_t	i;
	size_t	k;
	size_t	save;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	strlist = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!strlist)
		return (NULL);
	while (i < ft_wordcount(s, c) && s[k] != '\0')
	{
		while (s[k] == c)
			k++;
		save = k;
		while (s[k] != c && s[k] != '\0')
			k++;
		strlist[i] = ft_substr(s, save, k - save);
		i++;
	}
	strlist[i] = NULL;
	return (strlist);
}

// int main()
// {
//     char c=' ';
//  char str1[]= "  tripouille  42  ";
//     char **ptr = ft_split(str1, c);
// 	int i;
// 	i = 0;
// 	while (ptr[i] != NULL)
// 	{
// 		printf("%s\n", ptr[i]);
// 		i++;
// 	}
//     return (0);
// }
