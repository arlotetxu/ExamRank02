/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:39:38 by jflorido          #+#    #+#             */
/*   Updated: 2023/08/20 13:48:11 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int 	len = 0;
	char	*str_ret;

	while (src[len])
		len++;
	str_ret = malloc(sizeof(char) * (len + 1));
	if (!str_ret)
		return (NULL);
	len = 0;
	while (src[len])
	{
		str_ret[len] = src[len];
		len++;
	}
	str_ret[len] = '\0';
	return (str_ret);
}

int	main(int argc, char ** argv)
{
	if (argc == 2)
		printf("result: %s\n", ft_strdup(argv[1]));
	return (0);
}
