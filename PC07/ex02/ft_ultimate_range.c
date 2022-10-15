/*  */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:24:10 by migmarti          #+#    #+#             */
/*   Updated: 2022/10/09 16:18:20 by migmarti         ###   ########.fr       */
/*                                                                            */
/*  */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	n;
	int	i;

	n = max - min;

	if (min >= max)
	{
		*range = 0;
		return(0);
	}

	if(!(*range = (int *) malloc (sizeof(int) * n)))
		return (-1);
	i = 0;
	while(min < max)
	{
		*range[i] = min;
		min++;
		i++;
	}
	return(n);
}

int		main(void)
{
	int		*range;
	int		i;

	i = 0;
	printf("%d\n", ft_ultimate_range(&range, -5, 50));
	while (i < 55)
	{
	printf("%d\n", range[i]);
		i++;
	}
	return (0);
}
