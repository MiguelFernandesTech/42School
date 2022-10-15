/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:10:16 by migmarti          #+#    #+#             */
/*   Updated: 2022/10/08 10:35:15 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	int				j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (k < nb && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
		k++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char dest[100];
	char src[100];
	strcpy(dest,"Welcome to ");
	strcpy(src,"42 School!");
	printf("%s \n", ft_strncat(dest, src, 3));
	return (0);
}
*/
