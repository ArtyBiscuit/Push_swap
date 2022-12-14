void	exit_error(char *str)
{
	while (*str)
	{
		write(2, str, 1);
		str++;
	}
	write (2, "\n", 1);
	exit(2);
}
