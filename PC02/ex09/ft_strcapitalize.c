/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 10:56:42 by migmarti          #+#    #+#             */
/*   Updated: 2022/10/03 17:21:29 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdio.h>*/

char	*ft_strlowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int	ft_letter(char str)
{
	if (str >= 'a' && str <= 'z')
		return (0);
	if (str >= 'A' && str <= 'Z')
		return (0);
	if (str >= '0' && str <= '9')
		return (0);
	else
		return (1);
}

char	first_letter(char str)
{
	if ((str >= 'a') && (str <= 'z'))
	{
		str = (str - 32);
	}
	return (str);
}

char	*ft_strcapitalize(char	*str)
{
	int	i;
	int	f;

	i = 0;
	ft_strlowercase(str);
	while (str[i] != '\0')
	{
		if (i == 0)
				str[i] = first_letter(str[i]);
		f = ft_letter(str[i]);
		if (f == 1)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = (str[i + 1] - 32);
			}
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char c[] = "salut, cOmment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(c));
	return(0);
}
*/
