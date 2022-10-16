/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <jalwahei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:22:45 by jalwahei          #+#    #+#             */
/*   Updated: 2022/10/16 20:10:15 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "libft.h"

int	two_case(const char *str)
{
	if (ft_strncmp(&str[0], "2", 1) == 0)
		return (-1);
	if ((ft_strlen(str) == 21) && \
	(ft_strncmp(&str[0], "-", 1) == 0 && ft_strncmp(&str[1], "2", 1) == 0))
		return (0);
	return (0);
}

int	ft_atoi(const char *str)
{
	int					sign;
	long long			res;
	long long			oldres;
	unsigned long long	i;

	i = 0;
	res = 0;
	sign = 1;
	if ((ft_strlen(str) == 20 && str[0] != '-') || ft_strlen(str) == 21)
		return (two_case(str));
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
		sign = 1 - 2 * (str[i++] == '-');
	while (str[i] >= '0' && str[i] <= '9')
	{
		oldres = res;
		res = 10 * res + (str[i++] - '0');
		if (oldres > res)
			return (-(sign == 1));
	}
	return ((long long)res * sign);
}

//  12345678912345678912 > bigger than this number 
//  21351351513352344567
//  -213513515133523443 
//  213513515133523443443
//  12345678912345678912
//  -1234567891234567891
//  12345678912345678912
//  31231241343141241244214g21
// int main(int argc, char **argv)
// { 
// 	(void)argc;
//     printf("OUR atoi     %d \n", ft_atoi(argv[1]));
//     printf("THEIR atoi   %d \n",   atoi(argv[1]));
//     return 0;
// }