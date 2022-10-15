/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <jalwahei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:37:39 by jalwahei          #+#    #+#             */
/*   Updated: 2022/10/15 18:11:59 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*result;

	result = malloc(sizeof(t_list));
	result->content = content;
	result->next = NULL;
	return (result);
}
// int main()
// {
// 	 t_list *new;
// 	// new->content = "sff";
// 	// new->next = NULL;
// 	printf("%s" , ft_lstnew("jafar")->content);
// }