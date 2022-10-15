/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 08:26:59 by migmarti          #+#    #+#             */
/*   Updated: 2022/10/12 08:39:42 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int i = 0;

	while(str[i])
	{
		i++;
	}
	return(i);
}

char *ft_rev_print(char *str)
{
	int i = ft_strlen(str);

	i--;
	while(i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return(str);
}

int main(void)
{
	char str[] = "Miguel";
	ft_rev_print(str);
	return(0);
}
