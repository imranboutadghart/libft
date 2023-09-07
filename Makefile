cc = gcc -Wall -Wextra -Werror
srcs = *.c
name = libft.a

objs = $(patsubt %.c, %.o, $(srcs))
$(name) : $(objs)
	ar -rcs -o $(name) $(objs)
$(objs) : $(srcs)
	$(cc) $< $@
clean	:
	rm -rf $(name)
fclean	: clean
re	: fclean $(name)
