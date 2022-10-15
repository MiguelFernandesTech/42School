/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 08:54:18 by migmarti          #+#    #+#             */
/*   Updated: 2022/10/12 09:14:20 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_repeat(char str)
{
		int	c;
		c = 1;
		if(str >= 'a' && str <= 'z')
				c = str - 96;
		else if(str >= 'A' && str <= 'Z')
				c = str - 64;
		while(c)
			{
				ft_putchar(str);
				c--;
			}
}

int main(int ac, char **av)
{
	int i = 0;

	if(ac == 2)
	{
		while(av[1][i])
		{
			ft_repeat(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return(0);
}
