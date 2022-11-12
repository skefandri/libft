# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysabr <ysabr@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 11:38:22 by ysabr             #+#    #+#              #
#    Updated: 2022/11/04 09:46:55 by ysabr            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		= libft.a

SRCS_MAND	=	ft_memset.c		\
		  		ft_memmove.c	\
		  		ft_memchr.c		\
		  		ft_memcmp.c		\
		  		ft_memcpy.c		\
		  		ft_bzero.c		\
		  		ft_atoi.c		\
		  		ft_strlen.c		\
		  		ft_strlcpy.c	\
		 	 	ft_strchr.c		\
		 		ft_strrchr.c	\
		  		ft_strnstr.c	\
				ft_strnstr.c	\
				ft_strncmp.c	\
		  		ft_atoi.c		\
		  		ft_isalnum.c	\
				ft_strlcat.c	\
		  		ft_isdigit.c	\
		  		ft_isalpha.c	\
		  		ft_isascii.c	\
		 		ft_isprint.c	\
		  		ft_tolower.c	\
		  		ft_toupper.c	\
		  		ft_calloc.c		\
		  		ft_strdup.c		\
				ft_substr.c		\
				ft_strjoin.c	\
				 ft_strtrim.c	\
				 ft_split.c		\
				ft_itoa.c		\
				ft_strmapi.c	\
				ft_putstr_fd.c	\
				ft_putendl_fd.c	\
				ft_putnbr_fd.c	\
				ft_putchar_fd.c	\
				ft_striteri.c \

 SRCS_BON	=	ft_lstnew_bonus.c			\
	  			ft_lstadd_front_bonus.c	\
		  		ft_lstsize_bonus.c		\
 		  		ft_lstlast_bonus.c		\
 				ft_lstadd_back_bonus.c	\
 				ft_lstdelone_bonus.c		\
 				ft_lstclear_bonus.c		\
				ft_lstiter_bonus.c		\
 				ft_lstmap_bonus.c

OBJS_MAND	= ${SRCS_MAND:.c=.o}

OBJS_BON	= ${SRCS_BON:.c=.o}

CC		= cc

RM		= rm -rf

AR		= ar rcs

CFLAGS = -Wall -Werror -Wextra

all	:	$(NAME)

$(NAME)	:	$(OBJS_MAND)
		$(AR) $(NAME) $^
		

%.o:	%.c
		$(CC) $(CFLAGS) -c $< -o $@
		$(AR) $(NAME) $@

bonus	:	$(OBJS_MAND) $(OBJS_BON) $(NAME)

clean	:	
		$(RM) ${OBJS_MAND} ${OBJS_BON}


fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all
