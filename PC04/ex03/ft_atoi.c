/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:30:24 by migmarti          #+#    #+#             */
/*   Updated: 2022/10/08 12:54:01 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

char	ft_nonspaces(char *str, int *prt_a)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	*prt_a = i;
	return (count);
}

int	ft_atoi(char *str)
{
	int	a;
	int	sign;
	int	result;

	result = 0;
	sign = ft_nonspaces(str, &a);
	while (str[a] >= '0' && str[a] <= '9')
	{
		result *= 10;
		result += str[a] - '0';
		a++;
	}
	result *= sign;
	return (result);
}
/*
int main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_atoi(argv[1]));
	return (0);
}
*/
