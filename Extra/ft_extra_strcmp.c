//
// Created by Jose Manuel Florido Pereña on 7/1/23.
//
#include "ExamRank02_Prep.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	if (!s1 && !s2)
		return (0);
	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

//int	main(void)
//{
//	char	*s1;
//	char	*s2;
//
//	s1 = "This is the first text";
//	s2 = "khis is the second text";
//	printf("Result Original: %d\n", strcmp(s1, s2));
//	printf("Result Created: %d\n", ft_strcmp(s1, s2));
//	return 0;
//}