/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:21:21 by migmarti          #+#    #+#             */
/*   Updated: 2022/09/26 12:40:38 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char d)
{
	write(1, &d, 1);
}

void	comma(void)

{
	write(1, ",", 1);
	write(1, " ", 1);
}

void	number(char i)
{
	if (i < 10)
	{
		print('0');
		print('0' + i);
	}
	else
	{
		print('0' + i / 10);
		print('0' + i % 10);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			number(a);
			print(' ');
			number(b);
			if (a != 98 || b != 99)
			{
				comma();
			}
			b++;
		}
		a++;
	}
}
