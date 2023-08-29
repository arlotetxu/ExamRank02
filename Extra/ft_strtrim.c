

#include "ExamRank02_Prep.h"

int ft_from_left_pos(char const *s1, char const *set)
{
	int	i;
	int j;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0' && set[j] != s1[i])
			j++;
		if (set[j] == '\0')
			return (i);
		i++;
	}
	return 0;
}

int ft_from_right_pos(char const *s1, char const *set)
{
	//int	i;
	int j;
	int len;

	len = ft_strlen(s1);
	//i = 0;
	while (len >= 0)
	{
		j = 0;
		while (set[j] != '\0' && set[j] != s1[len -1])
			j++;
		if (set[j] == '\0')
			return (len);
		len--;
	}
	return 0;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	l;
	int r;
	int i;
	char	*str;


	l = ft_from_left_pos(s1, set);
	r = ft_from_right_pos(s1, set);
	str = malloc (sizeof (char) * (r - l + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (l < r)
	{
		str[i] = s1[l];
		i++;
		l++;
	}
	str[i] = '\0';
	return (str);
}

//int main (void)
//{
//	char	*text;
//	char	*rem;
//
//	text = "aaabcdefgaaa";
//	rem = "abc";
//	printf("Initial string: %s\n", text);
//	printf("Characters to remove: %s\n", rem);
//	printf("Returned value left: %d\n", ft_from_left_pos(text, rem));
//	printf("Returned value right: %d\n", ft_from_right_pos(text, rem));
//	printf("Returned string: %s\n", ft_strtrim(text, rem));
//	return 0;
//}