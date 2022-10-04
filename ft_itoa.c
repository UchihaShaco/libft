/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <jalwahei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 07:01:26 by jalwahei          #+#    #+#             */
/*   Updated: 2022/10/03 20:51:22 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	ft_num(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	else
		return (nbr);
}

size_t	num_len(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*c;

	if (n < 0)
	sign = -1;
	else
	sign = 1;
	len = num_len(n);
	c = (char *)malloc(sizeof(char) * len + 1);
	if (!c)
		return (0);
	c[len--] = '\0';
	while (len >= 0)
	{
		c[len] = '0' + ft_num(n % 10);
		n = ft_num(n / 10);
		len--;
	}
	if (sign == -1)
		c[0] = '-';
	return (c);
}
int main() {
    printf("String : %s", ft_itoa(-34123));
    return 0;
}