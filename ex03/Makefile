NAME = a.out

SRC = 	main.cpp 		\
		AMateria.cpp	\
		Ice.cpp			\
		Cure.cpp		\
		Character.cpp	\
		MateriaSource.cpp

HEADERS = 	AMateria.hpp	\
			Ice.hpp			\
			Cure.hpp		\
			Character.hpp	\
			MateriaSource.hpp

OBJT_DIR = objt

OBJT = $(addprefix $(OBJT_DIR)/, $(patsubst %.cpp, %.o, $(SRC)))

C++ = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -D DEBUG=$(DEBUG) 

RM = rm -f

MAKEFLAGS += --quiet


all: $(NAME)

$(NAME): $(OBJT)
	$(C++) $(CFLAGS) $(OBJT) -o $(NAME)

$(OBJT_DIR)/%.o: %.cpp $(HEADERS)
	mkdir -p $(@D)
	$(C++) $(CFLAGS) -c $< -o $@ 

run: $(NAME)
	./$(NAME)

rerun:	
	make re run

clean:
		$(RM) -r $(OBJT_DIR)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re rerun run debug
