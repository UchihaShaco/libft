/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <ja3far54@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:26:54 by jalwahei          #+#    #+#             */
/*   Updated: 2022/09/19 10:27:05 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (*(str++) != '\0')
	{
		l++;
	}
	return (l);
}
