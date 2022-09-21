/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <jalwahei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:35:27 by jalwahei          #+#    #+#             */
/*   Updated: 2022/09/21 20:13:30 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

strlcpy (char *dst, const char *src, size_t dstsize)
{
unsigned int i:
unsigned int res;

	i = 0;
	res = 0;
	while (src[res])
		res++;
		if (dstsize < 1)
return (res);
while (src[i] && i < dstsize - 1)
{
		dst[i] = src[i];
		i++;
}
	dst[i] = '\0';
return (res);
}
