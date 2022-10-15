/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:11:42 by migmarti          #+#    #+#             */
/*   Updated: 2022/10/08 10:36:15 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_compare(char	*str, char *to_find)
{
	while (*str && *to_find)
	{
		if (*str != *to_find)
		{
			return (0);
		}
		str++;
		to_find++;
	}
	return (*to_find == '\0');
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	if (to_find[x] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if ((str[i] == to_find[x]) && ft_compare(str, to_find))
		{
			return (str);
		}
		str++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char str[] = "DEUS ME LIVRE JESUS";
	char to_find[] = "LIVRE";
	printf("%s\n", ft_strstr(str, to_find));
	return (0);
}
*/
