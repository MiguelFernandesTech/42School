/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdwatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:41:19 by migmarti          #+#    #+#             */
/*   Updated: 2022/10/12 18:03:41 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	if(argc == 3)
	{
		while(argv[1][i] && argv[2][j])
		{
			while(argv[1][i] == argv[2][j] && (argv[1][i] && argv[2][j]))
			{
				j++;
				i++;
			}
			j++;
		}
		if(argv[1][i] == '\0')
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
}
