/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:11:41 by migmarti          #+#    #+#             */
/*   Updated: 2022/10/13 11:14:47 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char i = '0';

	while(i <= '9')
	{
		write(1, &i, 1);
		i++;
	}
}

int main(void)
{
	ft_print_numbers();
	return(0);
}
