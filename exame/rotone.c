/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:26:59 by migmarti          #+#    #+#             */
/*   Updated: 2022/10/12 11:56:33 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rotone(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
			str[i] += 1;
	else if(str[i] == 'Z' || str[i] == 'z')
			str[i] -= 25;
		write(1, &str[i], 1);
		i++;
	}

}
int main(int argc, char **argv)
{
	if(argc == 2)
	{
		ft_rotone(argv[1]);
	}
	write(1, "\n", 1);
}
