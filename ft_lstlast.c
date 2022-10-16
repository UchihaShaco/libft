/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <jalwahei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:13:23 by jalwahei          #+#    #+#             */
/*   Updated: 2022/10/15 19:27:21 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
// int main ()
// {
// 	t_list *a;
// 	t_list *b;
// 	t_list *c;
// 	a = ft_lstnew("1");
// 	b = ft_lstnew("2");
// 	c = ft_lstnew("3");
// 	a->next = b;
// 	b->next = c;
// 	c ->next = NULL;
// 	printf("%s", ft_lstlast(a)->content);
// }
