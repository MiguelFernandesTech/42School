/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strreverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:21:24 by migmarti          #+#    #+#             */
/*   Updated: 2022/10/12 17:47:00 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;

	while(str[i])
	{
		i++;
	}
	return(i);
}

char	ft_reverse(char *str)
{
	int i;
	i = ft_strlen(str);
	i--;
	while(i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return(str[i]);
}

int main(void)
{
	char str[] = "Miguel";
	ft_reverse(str);
	return(0);
}
