/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moments.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:23:46 by jflorido          #+#    #+#             */
/*   Updated: 2023/09/23 18:17:37 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : moment
Expected files   : moment.c
Allowed functions: malloc, free
--------------------------------------------------------------------------------

Create a function that takes a duration in seconds as parameter and returns a 
string with the number of seconds, minutes, hours, days or months elapsed.
This function supposes that months are 30-days long and ignores leap years.

The format of this string will be :
    
	xxx {second(s)|minute(s)|hour(s)|day(s)|month(s)} ago.

Your function should return the lowest possible value (as you can see below
in the examples).

The prototype of this function will be :
    
    char    *moment(unsigned int duration)

Examples:

moment(0)       => 0 seconds ago.
moment(1)       => 1 second ago.
moment(30)      => 30 seconds ago.
moment(65)      => 1 minute ago.
moment(120)     => 2 minutes ago.
moment(2400)    => 40 minutes ago.
moment(3735)    => 1 hour ago.
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_atoi_mom(char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		if (str[i] == '-')
			sign = -1;
		while (str[i] == '+' || str[i] == '-')
			i++;
		while (str[i] >= '0' && str[i] <= '9')
		{
			res = res * 10 + (str[i] - '0');
			i++;
		}	
	}
	return (res * sign);
}

char	*ft_time_stamp(int nb, int *index)
{
	char	*time_s;

	if (nb >= 0 && nb <= 60)
	{
		time_s = malloc(sizeof(char) * (7 + 1));
		time_s = "seconds";
		*index = 0;
	}
	else if (nb > 60 && nb <= 3600)
	{
		time_s = malloc(sizeof(char) * (7 + 1));
		time_s = "minutes";
		*index = 1;
	}
	else if (nb > 3600 && nb <= 86400)
	{
		time_s = malloc(sizeof(char) * (5 + 1));
		time_s = "hours";
		*index = 2;
	}
	else if (nb > 86400 && nb <= 2592000)
	{
		time_s = malloc(sizeof(char) * (4 + 1));
		time_s = "days";
		*index = 3;
	}
	else
	{
		time_s = malloc(sizeof(char) * (6 + 1));
		time_s = "months";
		*index = 4;
	}
	return (time_s);
}

// char	*moment(unsigned int duration)
// {
// 	char
// }

int	main(void)
{
	char	*str = "4000";
	int		index;

	index = 0;
	printf("Numero: %d\n", ft_atoi_mom(str));
	printf("Valor tiempo: %s\n", ft_time_stamp(ft_atoi_mom(str), &index));
	printf("Valor de index: %d\n", index);
	return (0);
}
