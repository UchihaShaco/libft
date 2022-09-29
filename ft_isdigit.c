/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <jalwahei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 04:18:45 by jalwahei          #+#    #+#             */
/*   Updated: 2022/09/29 14:18:32 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	The isdigit() function tests for a decimal digit character.
*/
#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
