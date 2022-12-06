# 42Berlin-Libft
This project is about coding a C library. It will contain a lot of general purpose functions your programs will rely upon.(v15)

## CTYPE

> The ctype.h header file of the C Standard Library declares several functions that are useful for
> testing and mapping characters.


| Prototype                     | Description | Used functions     |
| :---                          |    :----                                                 | :---  |
| ```int ft_isalpha(int c)```   | returns wether an integer is a letter or not             | none  |
| ```int ft_isalnum(int c)```   | returns wether an integer is aplhanummerical or not      | none  |
| ```int ft_isascii(int c)```   | returns wether an integer is an ascii-value or not       | none  |
| ```int ft_isprint(int c)```   | returns wether an integer is printable or not            | none  |
| ```int ft_isdigit(int c)```   | returns wether an integer is a digit or not              | none  |
| ```int ft_tolower(int c)```   | returns an uppercase letter as a lowercase letter        | none  |
| ```int ft_toupper(int c)```   | returns a lowercase letter as an uppercase letter        | none  |

## STRINGS (mem-functions)


> The strings.h header file of the C Standard Library declares several functions that are useful for
> manipulating any type of arrays or pointers.


| Prototype                                                     | Description                                            | Used functions |
| :---                                                          | :----                                                  | :---           |
| ```void ft_bzero(void *s, size_t n)```                        | sets n bytes of s to 0                                 | none           |
| ```void *ft_memccpy(void *dst, void *src, int c, size_t n)``` | copys n bytes from src to dst until it hits c          | none           |
| ```void *ft_memchr(const void *s, int c, size_t n)```         | finds c in n bytes of s                                | none           |
| ```int ft_memcmp(const void *s1, void *s2, size_t n)```       | returns the first difference between s1 and s2         | none           |
| ```void *ft_memcpy(void *dst, void *src, size_t n)```         | copies n bytes from src to dst                         | none           |
| ```void *ft_memmove(void *dst, void *src, size_t n)```        | same as memcpy but handles overlaps                    | none           |
| ```void *ft_memset(void *s, int c, size_t n)```               | set n bytes of s to c                                  | none           |

## PUT-FUNCTIONS


> The put-functions are useful to write to different filedescriptors and therefore into files.
> These functions are not part of libc and are part of the second part of the task.

| Prototype                                  | Description                          | Used functions |
| :---                                       |    :----                             | :---           |
| ```void ft_putchar_fd(char c, int fd)```   | writes a char to fd                  | write          |
| ```void ft_putstr_fd(char *s, int fd)```   | writes a string to fd                | write          |
| ```void ft_putendl_fd(char *s, int fd)```  | writes a string and a new line to fd | write          |
| ```void ft_putnbr_fd(int n, int fd)```     | writes an integer to fd              | write          |

## STDLIB


> The stdlib.h header defines four variable types, several macros, and various functions for performing general functions.


| Prototype                                         | Description                                                        | Used functions |
| :---                                              |    :----                                                           | :---           |
| ```int ft_atoi(const char *str)```                | returns a string as an integer                                     | none           |
| ```void *ft_calloc(size_t count, size_t size))``` | returns an allocated pointer of size count * len and sets mem to 0 | malloc         |

[//]: <| I recommend adding realloc here | realloc gives a pointer more memory withpout loosing its value               | malloc, free | high |>


## STRING


>The string.h header defines one variable type, one macro, and various functions for manipulating arrays of characters.


| Prototype               | Description | Used functions     |
| :---                    |    :----    |          :---      |
| ```char *ft_strchr(const char *s, int c)```                   | finds c in s, returns 0 if not found                                  | none   |
| ```char *ft_strrchr(const char *s, int c)```                  | finds c in s starting from the back (return same as strchr)           | none   |
| ```char *ft_strdup(const char *src)```                        | duplicates src (Check if NULL is returned!!)                          | malloc |
| ```char *ft_strjoin(char *s1, char *s2)```                    | creates new string out of concatnation of s1 and s2                   | malloc |
| ```size_t ft_strlcat(char *dst, char *src, size_t dstsize)``` | adds dstzie - strlen(dstzie) - 1 chars to dst from src                | none   |
| ```size_t ft_strlcpy(char *dst, char *src, size_t dstsize)``` | copys dstzie - 1 chars from dst to src                                | none   |
| ```char *ft_strmapi(char *s, char (*f)(unsigned int, char)9``` | apllies function f on every char  of s                                | none   |
| ```size_t ft_strlcpy(char *dst, char *src, size_t dstsize)``` | returns of first difference of src and dst (0 if no difference accured| none   |
| ```size_t ft_strlen(const char *s)```                         | returns the length of a string s                                      | none   |
| ```char *ft_strnstr(const char *haystack, char *needle, size_t len)```| finds the needle in the haystack                              | none   |
| ```char *ft_substr(char *s, unsigned int start, size_t len)```| creates a substring of s from start to start + len                    | malloc |
| ```char *ft_strtrim(char *s1, char *set)```                   | creates a trimmed substring of *s without chars in set                | malloc |

## LIST-FUNCTIONS

> The lst-funtcions allow you to manipulate and use lists. Lists are quiet useful if you dont know the final length of an array because you can just append as many nodes as you until you run out of memory.

```c
typedef struct		s_list
{
	void		*content;
	struct s_list	*next;
}	       		t_list;
```

| Prototype               | Description | Used functions     |
| :---                    |    :----    |          :---      |
| ```void ft_lstadd_back(t_list **lst, t_list *new)```          | adds node new to tehe end of lst                                      | none   |
| ```void ft_lstadd_front(t_list **lst, t_list *new)```              | adds node new to the front of lst                                | none   |
| ```void ft_lstclear(t_list **lst, void (*del)(void*))```           | deletes and frees every node of lst                                   | free   |
| ```void ft_lstdelone(t_list *lst, void (*del)(void*))```            | deletes and frees one node                                            | free   |
| ```void ft_lstiter(t_list *lst, void (*f)(void *))```               | apllies function f on the content of every node                       | none   |
| ```t_list *ft_lstlast(t_list *lst)```                               | return the last node of lst                                           | none   |
| ```t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))``` | creates new list out of apllication of on content           | free   |
| ```t_list *ft_lstnew(void *content)```                              | creates a new and give the paramter to the conten                     | malloc |
| ```int ft_lstsize(t_list *lst)```                                   | returns the size of list                                              | none   |
