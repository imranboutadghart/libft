cc = gcc
cflags = -Wall -Wextra -Werror
name = libft.a
bsrcs = $(wildcard *_bonus.c)
srcs = $(filter-out $(bsrcs), $(wildcard *.c))
objs = $(patsubst %.c, %.o, $(srcs))
bobjs =  $(patsubst %.c, %.o, $(bsrcs))

$(name) : $(objs)
	ar -rcs -o $(name) $(objs)

$(objs) : %.o : %.c
	$(cc) $(cflags) -Iincludes -c $< -o $@

.phony : $(bobjs) clean fclean re bonus 

$(bobjs) : %.o : %.c
	$(cc) $(cflags) -Iincludes -c $< -o $@

clean	:
	rm -rf $(name)

fclean	: clean
	rm -rf *.o

re	: fclean $(name)

bonus :	$(objs) $(bobjs)
	ar -rcs -o $(name) $(objs) $(bobjs)
