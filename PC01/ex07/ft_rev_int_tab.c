/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:22:52 by migmarti          #+#    #+#             */
/*   Updated: 2022/09/28 14:38:38 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_rev_int_tab(int	*tab,	int size)
{
	int	aux;
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		aux = tab[i];
		tab[i] = tab[j];
		tab[j] = aux;
		i++;
		j--;
	}
}

/*
int	main(void)
{
	int	tab[]= {1, 2, 3, 4, 5};
	int size = 0;
	while(tab[size] != 0)
	{
		printf("%d", tab[size]);
		size++;
	}
	printf(" ");
	ft_rev_int_tab(tab, size);
	size = 0;
	while(tab[size] != 0)
	{
		printf("%d", tab[size]);
		size++;
	}
	return (0);
}
*/
