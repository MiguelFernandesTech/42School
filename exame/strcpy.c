/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:03:15 by migmarti          #+#    #+#             */
/*   Updated: 2022/10/12 12:21:58 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i = 0;

	while(s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
		return(s1);
}

int main (void)
{
	char s1[] ="Hello";
	char s2[] ="World";
	*ft_strcpy( s1, s2);
	printf("%s", s2);
	return(0);
}
