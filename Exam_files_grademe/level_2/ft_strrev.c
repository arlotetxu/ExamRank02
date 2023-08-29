/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 15:59:09 by jflorido          #+#    #+#             */
/*   Updated: 2023/08/20 16:29:37 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// char *ft_strrev(char *str)
// {
// 	int i = -1;
// 	int length = 0;
// 	char temporary;

// 	while (str[length])
// 		length++;
// 	while (++i < length / 2)
// 	{
// 		temporary = str[i];
// 		str[i] = str[length - 1 - i];
// 		str[length - 1 - i] = temporary;
// 	}
// 	return (str);
// }

char    *ft_strrev(char *str)
{
	int	len;
	int	i;
	char	aux;

	len = 0;
	while(str[len])
		len++;
	i = 0;
	len--;
	while(i < len)
	{
		aux = str[i];
		str[i] = str[len];
		str[len] = aux;
		i++;
		len--;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	char	str[6] = "abcdef";
	*argv = NULL;
	if (argc != 0)
		printf("result: %s\n", ft_strrev(str));
	return (0);
}
