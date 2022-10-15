/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:29:40 by migmarti          #+#    #+#             */
/*   Updated: 2022/09/28 14:31:16 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_sort_int_tab(int	*tab, int ize)
{
	int	aux;
	int	i;
	int	j;

	i = 0;
	j = size -1;
	while (size >= 0)
	{
		while (i < j)
		{
			if (tab[i] > tab[i + 1])
			{
				aux = tab[i];
				tab[i] = tab[j];
				tab[j] = aux;
				i++;
			}
		j--;
		}
	}
}
