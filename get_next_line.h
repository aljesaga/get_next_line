#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 8
# define FD_SIZE 4098

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

size_t	ft_len(const char *c);
char	*get_next_line(int fd);
char	*ft_join(char const *s1, char const *s2);
#endif
