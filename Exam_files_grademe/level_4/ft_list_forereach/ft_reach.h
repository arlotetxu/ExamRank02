/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reach.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:19:38 by jflorido          #+#    #+#             */
/*   Updated: 2023/09/14 19:21:00 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_REACH_H
#define FT_REACH_H
typedef struct	 s_list
{
    struct s_list	*next;
    void			*data;
 }					t_list;
#endif