#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const char *str);
char	*ft_strchr(char *s, int c);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(char *src);
char	*ft_strjoin_mod(char *s1, char *s2);
int		check_rem(char *rem);
void	if_new_line(char **line, char **rem);
int		get_next_line(int fd, char **line);
void	rem_return(int ret, char *buf, char **rem);
int		return_value(int ret);

#endif
