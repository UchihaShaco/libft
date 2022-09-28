/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <jalwahei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:22:45 by jalwahei          #+#    #+#             */
/*   Updated: 2022/09/28 13:20:50 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int					sign;
	long long			res;
	unsigned long long	i;

	i = 0;
	res = 0;
	sign = 1;
	while ((str[i] == ' ') || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
		sign = 1 - 2 * (str[i++] == '-');
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (res >= LLONG_MIN / 10 || (res <= LLONG_MIN && res > LLONG_MIN)
			|| (res >= LLONG_MAX / 10 && sign == -1))
			return (0);
		if (res >= LLONG_MAX / 10)
			return (-1);
		res = 10 * res + (str[i++] - '0');
	}
	return (res * sign);
}
// // #include <stdio.h>
// // #include <stdlib.h>
// // // 12345678912345678912 > bigger than this number 
// // 21351351513352344567
// // -213513515133523443 
// // 213513515133523443443
// // 12345678912345678912
// // -1234567891234567891
// // 12345678912345678912
// // 31231241343141241244214g21
// int main(int argc, char **argv)
// { 
// 	(void)argc;
//     printf("OUR atoi     %d \n", ft_atoi(argv[1]));
//     printf("THEIR atoi   %d \n", atoi(argv[1]));
//     return 0;
// }
// //this is our agreement to test the atoi
// //if the output of Jafar's atoi gave any output 
// //different than original atoi
// //, Jafar will give Ahmed Salem Nutella barcode 4005400401027
// //date 24th Sept 2022
// // Jafar m d alwaheidi 
// //CASE 00 jalwahei@lab3rc2s8 TESTTT % ./a.out -01
// // -1 our atoi
// // 0 their atoi