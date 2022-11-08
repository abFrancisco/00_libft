#ifndef FT_LIBFT_H
# define FT_LIBFT_H
void	ft_bzero(void *s, unsigned int n);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void *ft_memchr(const void *s, int c, unsigned int n);
int	ft_memcmp(const void *s1, const void *s2, unsigned int n);
void	*ft_memcpy(void *dest, const void *src, unsigned int n);
void	*ft_memmove(void *dest, const void *src, unsigned int n);
void	*ft_memset(void *s, int c, unsigned int n);
char	*ft_strchr(const char *s, int c);
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);
int	ft_strlen(char *str);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strrchr(const char *s, int c);
int ft_tolower(int c);
int	ft_toupper(int c);


#endif