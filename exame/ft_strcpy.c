/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:29:18 by migmarti          #+#    #+#             */
/*   Updated: 2022/10/13 14:42:47 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *s1, char *s2)
{
	int i = 0;

	while(s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return(s1);
}

int main(void)
{
	char s1[] = "ola";
	char s2[] = "tudoo";
	printf("%s", ft_strcpy(s1, s2));
	return(0);
}
