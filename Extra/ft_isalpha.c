/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 09:46:26 by jflorido          #+#    #+#             */
/*   Updated: 2022/12/30 18:30:53 by arlo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ExamRank02_Prep.h"

int	ft_isalpha(int c)
{
	c = (char) c;
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
        return (0);
}


//int	main()
//{
//	int	i;
//
//	i = 234;
//	printf("Is alpha? (%d)\n", ft_isalpha(i));
//}