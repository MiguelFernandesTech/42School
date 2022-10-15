/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:38:50 by migmarti          #+#    #+#             */
/*   Updated: 2022/10/08 10:28:04 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	char s1[] = "alaaa";
	char s2[] = "aaalO";
	printf("%d ", ft_strcmp(s1, s2));
	return(0);
}*/
