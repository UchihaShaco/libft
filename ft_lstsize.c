/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <jalwahei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:27:20 by jalwahei          #+#    #+#             */
/*   Updated: 2022/10/15 20:35:54 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
// int main ()
// {
// 	t_list *a;
// 	t_list *b;
// 	t_list *c;
// 	t_list *d;
// 	a = ft_lstnew("1");
// 	b = ft_lstnew("2");
// 	c = ft_lstnew("3");
// 	d = ft_lstnew("4");
// 	a->next = b;
// 	b->next = c;
// 	c ->next = d;
// 	d ->next = NULL;
// 	printf("%d", ft_lstsize(a));
// }