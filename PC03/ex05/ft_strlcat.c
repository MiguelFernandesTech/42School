/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:32:02 by migmarti          #+#    #+#             */
/*   Updated: 2022/10/08 10:37:14 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	j = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src[j] != '\0' && j < size - dlen - 1)
	{
		dest[dlen] = src[j];
		dlen++;
		j++;
	}
	dest[dlen + j] = '\0';
	return (dlen + slen);
}
/*
#include <string.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	(void)argc;
	printf("%i\n", ft_strlcat(argv[1], argv[2], 40));
	printf("%s\n", argv[1]);
	return (0);
}
*/
