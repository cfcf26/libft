# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekwak <ekwak@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/10 23:21:56 by ekwak             #+#    #+#              #
#    Updated: 2022/07/18 21:20:12 by ekwak            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
AR = ar
ARFLAGS = -crs
RM = rm
RMFLAGS = -f
SRCS =  ft_strlen.c ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
		ft_memchr.c ft_memcmp.c ft_strncmp.c ft_isalpha.c \
		ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
		ft_strnstr.c ft_atoi.c ft_strdup.c ft_calloc.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_strmapi.c ft_striteri.c ft_strtrim.c ft_itoa.c \

BNS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		   ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
		   ft_lstmap.c \

OBJS = $(SRCS:.c=.o)

BNS_OBJS = $(BNS_SRCS:.c=.o)

$(NAME)	: $(OBJS)
				$(CC) $(CFLAGS) -c $(SRCS) -I./
				$(AR) $(ARFLAGS) $(NAME) $(OBJS)

all : $(NAME)

bonus : $(NAME)
				$(CC) $(CFLAGS) -c $(BNS_SRCS) -I./
				$(AR) $(ARFLAGS) $(NAME) $(BNS_OBJS)

clean :
				$(RM) $(RMFLAGS) $(OBJS) $(BNS_OBJS)

fclean : clean
				$(RM) $(RMFLAGS) $(NAME)

re : fclean all

.PHONY : all clean fclean re
