/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <jalwahei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 20:54:35 by jalwahei          #+#    #+#             */
/*   Updated: 2022/10/10 17:26:06 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
applies the function on the string  and returns it within new string 
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
** char my_func(unsigned int i, char str)
** {
** 	printf("My  function: index = %d and %c\n", i, str);
** 	return str - 32;
** }
** int main()
** {
** 	char str[10] = "hello.";
** 	printf("The result is %s\n", str);
** 	char *result = ft_strmapi(str, my_func);
** 	printf("The result is %s\n", result);
** 	return 0;
** }
*/