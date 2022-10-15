/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:36:03 by migmarti          #+#    #+#             */
/*   Updated: 2022/10/02 11:54:10 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	f;

	i = 0;
	f = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		f = 1;
		else
			return (0);
		i++;
	}
	return (f);
}
/*
int	main()
{
	char c[] = "1sasas";
	printf("%d\n", ft_str_is_lowercase(c));
	return(0);
}
*/
