#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
char	*get_next_line(int fd);
char	*ft_upd_buf(char *buf, int fd, size_t buf_size);
char	*ft_bite_line(char * *str);
int		ft_is_nl_here(char *str);
char	*ft_strjoin(char *str1, char *str2);
size_t	ft_strlen(const char *s);
#endif
