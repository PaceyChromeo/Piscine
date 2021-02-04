#include "display_file.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_display_file(char *str)
{
	int 	fd;
	int	ret;
	char	buf[BUF_SIZE + 1];

	fd = open(str, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr(READ_ERR);
		return ;
	}
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	ft_putstr(buf);
	close(fd);
}

int main(int ac, char **av)
{
	(void)ac;
	if (ac < 2)
		ft_putstr(NAME_MISS);
	if (ac > 3)
		ft_putstr(MANY_ARG);
	else
		ft_display_file(av[1]);
	return (0);
}
