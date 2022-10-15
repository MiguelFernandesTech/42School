/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:43:55 by migmarti          #+#    #+#             */
/*   Updated: 2022/10/13 12:00:10 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
	}
}

int main(int argc, char **argv)
{
	int i = 0;
	int j = argc - 1;

	if(argc > 1)
	{
		while(argv[j][i])
		{
			write(1, &argv[j][i++], 1);
		}
	}
	write(1, "\n", 1);
}
