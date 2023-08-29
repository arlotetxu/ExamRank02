/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:22:13 by jflorido           #+#    #+#             */
/*   Updated: 2022/12/30 13:22:16 by jflorido          ###   ########.fr       */
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

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;
	int 	i;

	s = ft_itoa(n);
	i = 0;
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		while(s[i])
		{
			write(fd, &s[i], 1);
			i++;
		}
		//write(fd, "\0", 1);
	}
	free (s);
}

//int main(void)
//{
//	int fd;
//
//	fd = open("ft_putnbr_fd.txt", O_WRONLY);
//	if (fd == -1)
//		fd = creat("ft_putnbr_fd.txt", O_WRONLY);
//	ft_putnbr_fd(5111979, fd);
//	return 0;
//}