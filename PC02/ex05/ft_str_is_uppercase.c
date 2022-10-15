/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:59:34 by migmarti          #+#    #+#             */
/*   Updated: 2022/10/02 11:54:29 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<string.h>
#include<stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	f;

	i = 0;
	f = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		f = 1;
		else
			return (0);
		i++;
	}
	return (f);
}
