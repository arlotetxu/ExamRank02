/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:22:01 by jflorido           #+#    #+#             */
/*   Updated: 2022/12/30 13:22:04 by jflorido          ###   ########.fr       */
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

void	ft_putendl_fd(char *s, int fd)
{
	int i;

	i = 0;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

//int	main(void)
//{
//	int		fd;
//	char	*c;
//
//	c = "This is a text to be added to the fd with a new line at the end.";
//	fd = open("ft_putendl_fd.txt", O_WRONLY);
//	printf("fd = %d\n", fd);
//	if (fd == -1)
//	{
//		fd = open("ft_putendl_fd.txt", O_CREAT | O_WRONLY);
//		printf("New_fd = %d\n", fd);
//	}
//	ft_putendl_fd(c, fd);
//	return 0;
//}