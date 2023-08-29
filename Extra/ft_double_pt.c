/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Double_pt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:16:46 by jflorido          #+#    #+#             */
/*   Updated: 2022/12/30 18:30:53 by arlo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ExamRank02_Prep.h"

void	ft_Double_pt(void)
{
	char	**ptr;
	int		i;
	int		j;
	char	c;

	ptr = malloc(sizeof (char *) * 10);
	i = 0;
	c = 'A';
	while (i < 10)
	{
		j = 0;
		ptr[i] = malloc (sizeof (char) * 10);
		while (j < 10)
		{
			ptr[i][j] = c;
			j++;
		}
		i++;
		c++;
	}
	i = 0;
	while (i < 10)
	{
		printf("%s\n", ptr[i]);
		i++;
	}
}

//int	main(void)
//{
//	ft_Double_pt();
//	return 0;
//}