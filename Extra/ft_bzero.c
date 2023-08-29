/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 20:46:36 by jflorido          #+#    #+#             */
/*   Updated: 2022/12/30 18:30:53 by arlo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ExamRank02_Prep.h"

void	ft_bzero(void *s, size_t n)
{
	if (n > 0)
		ft_memset(s, '0', n);
}

//int	main(void)
//{
//	char	text[] = "XXXXXXXXXX";
//
//	printf("Text before modification: %s\n", text);
//	ft_bzero(text, 4);
//	printf("Text after modification: %s\n", text);
//	return (0);
//