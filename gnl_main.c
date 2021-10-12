#include "get_next_line.h"

void ft_pepe(void)
{
	system("leaks a.out");
}

int	main(void)
{
	char	*str;
	int		fd;

	atexit(ft_pepe);

	fd = open("lotr.txt", O_RDONLY);
	while ((str = get_next_line(17)))
	{
		printf("%s", str);
		free(str);
	}	
	//system("leaks a.out");
	return (0);
}
