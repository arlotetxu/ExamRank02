//
// Created by Jose Manuel Florido Pereña on 3/7/23.
//

int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}