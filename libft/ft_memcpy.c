/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <jalwahei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 19:34:01 by jalwahei          #+#    #+#             */
/*   Updated: 2022/09/21 16:34:12 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// copy byt
void *ft_memcpy(void *dst, const void *src, size_t n)
{
	if (dst == NULL) 
	return NULL;
	char *ptrdst;
	ptrdst = (char *) dst;
	char *ptrsrc;
	ptrsrc = (char *) src;
	int i;
	
	i = 0;

	while (i < n)
	{
		ptrdst[i] = ptrsrc[i];
		i++;
	}
	return (dst);
}
int main ()
{
  char str1[] = "Geeks"; 
  char str2[] = "Quiz"; 
 
  puts("str1 before memcpy ");
  puts(str1);
 
  ft_memcpy(str1, str2, sizeof(str2));
 
  puts("\nstr1 after memcpy ");
  puts(str1);
 
  return 0;
}