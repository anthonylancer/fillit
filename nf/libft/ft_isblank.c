unsigned char ft_isblank(char str)
{
	if (str == '\n' || str == '\t' || str == '\r' || str == '\v' ||
		str == '\f' || str == ' ')
		return (1);
	else
		return (0);
}