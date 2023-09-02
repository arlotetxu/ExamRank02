/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 14:22:44 by jflorido          #+#    #+#             */
/*   Updated: 2023/09/01 14:24:29 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ft_list.h
# define ft_list.h

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

#endif
