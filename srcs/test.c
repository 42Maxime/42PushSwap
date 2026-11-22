int	test(char *test)
{
	int	i;

	i = 0;
	while (test[i])
		i++;
	return (i);
}