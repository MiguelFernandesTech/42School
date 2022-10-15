/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:28:45 by migmarti          #+#    #+#             */
/*   Updated: 2022/10/12 11:24:09 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_first(char *str)
{

	int i = 0;
	while((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	while(str[i] != '\0' && str[i] != ' ')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main(int ac, char **av)
{
	if(ac == 2)
	{
		ft_first(av[1]);
	}
	ft_putchar('\n');
}
