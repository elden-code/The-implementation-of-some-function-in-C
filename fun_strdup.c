#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	size_t		len;
	size_t		count;
	char		*str_allocted;

	len = 0;
	while (s1 && s1[len])
		len++;
	str_allocted = (char *)malloc(len + 1);
	if (str_allocted == NULL)
		return (NULL);
	count = 0;
	while (s1 && s1[count])
	{
		str_allocted[count] = s1[count];
		count++;
	}
	str_allocted[count] = '\0';
	return (str_allocted);
}
