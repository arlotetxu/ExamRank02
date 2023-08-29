/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:44:58 by jflorido          #+#    #+#             */
/*   Updated: 2022/12/30 18:30:53 by arlo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ExamRank02_Prep.h"

int	ft_isascii(int n)
{
	if (n >= 0 && n <= 127)
        return (1);
	else
        return (0);
}

//int	main(void)
//{
//	int	i;
//
//	i = 127;
//    printf("is ascii? (%d)\n", ft_isascii(i));
//	return (0);
//}