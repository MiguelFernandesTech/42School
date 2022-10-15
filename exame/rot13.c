/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:33:50 by migmarti          #+#    #+#             */
/*   Updated: 2022/10/12 09:59:12 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rot13(char str)
{
	int i = 1;

	if((str >= 'a' && str <= 'm') || (str >= 'A' && str <= 'M'))
		i = str + 13;
	else if((str >= 'n' && str <= 'z')|| (str >= 'N' && str <= 'Z'))
		i = str - 13;
	ft_putchar(i);
	i++;
}

int main(int argc, char **argv)
{
	int i = 0;

	if(argc == 2)
		{
			while(argv[1][i])
			{
				ft_rot13(argv[1][i]);
				i++;
			}
		}
		ft_putchar('\n');
}
