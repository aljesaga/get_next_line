#include "get_next_line.h"

int	main(int arc, char **arv)
{
	char	*str;
	int		fd;

	(void)arc;
	fd = open(arv[1], O_RDONLY);
	str = get_next_line(fd);
	printf("%s\n", str);
	str = get_next_line(fd);
	printf("%s\n", str);
	str = get_next_line(fd);
	printf("%s\n", str);
	str = get_next_line(fd);
	printf("%s\n", str);
	str = get_next_line(fd);
	printf("%s\n", str);
	return (0);
}
