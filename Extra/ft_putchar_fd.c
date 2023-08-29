/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 12:55:52 by jflorido          #+#    #+#             */
/*   Updated: 2022/12/30 12:55:57 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* *** WORKING WITH FILES -- FILE DESCRIPTORS ***
#include <fcntl.h>
open function:	int open(const char *pathname, int flags);
	return -1 if function fails

read function:	ssize_t read(int fd, void *buf, size_t count);
	return the number bytes read
	the function stores the read bytes int the string buf

close function:	int close(int fd);
write function: ssize_t??? write(int fd, void *buf, size_t count);
flags:
O_RDONLY
O_WRONLY
O_RDWR
O_CREAT
O_APPEND
O_TRUNC
count: Number of bytes to read / write. Combine with the using of sizeof
*/

#include "ExamRank02_Prep.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

//int	main(void)
//{
//	int		fd;
//	char	c;
//
//	c = 'A';
//	fd = open("ft_putchar_fd.txt", O_WRONLY);
//	printf("fd = %d\n", fd);
//	if (fd == -1)
//	{
//		fd = open("ft_putchar_fd.txt", O_CREAT | O_WRONLY);
//		printf("New_fd = %d\n", fd);
//	}
//	ft_putchar_fd(c, fd);
//	return 0;
//}