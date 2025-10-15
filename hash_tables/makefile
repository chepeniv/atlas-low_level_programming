CC      := gcc
GDB     := cgdb

FL_ERR   := -Wall -Werror -Wextra -pedantic 
FL_DEBUG := -fsanitize=address -fsanitize=undefined -fsanitize=leak -ggdb3 
FL_TEST  := $(shell pkg-config --cflags --libs criterion)

CREL     := ${CC} ${FL_ERR}
CDEV     := ${CC} ${FL_ERR} ${FL_DEBUG} 
CTEST    := ${CC} ${FL_ERR} ${FL_DEBUG} ${FL_TEST} 

FL_VALG   := -s --track-origins=yes --leak-check=full --show-leak-kinds=all
MEMTEST := valgrind ${FL_VALG}

.DELETE_ON_ERROR:
.PHONY: clean clean-obj clean-lib betty

######## RELEASE

######## DEVELOPMENT

######## TESTS

test-sorted_ht: 
	${CTEST} 1-djb2.c 2-key_index.c 100-sortet_hash_table.c dev_test/sorted_hash_table.test.c -o test-sorted_ht.x
	@./test-sorted_ht.x -l
	@./test-sorted_ht.x --full-stats --verbose=0 --timeout=20 --color=always

######## MEMORY TESTS

######## RUN

######## UTILITY

betty:
	@echo "running Betty CODING STYLE checks..."
	@betty-style *.c *.h
	@echo "running Betty DOCUMENTATION checks..."
	@betty-doc *.c *.h

clean: clean-obj clean-lib
	@$(RM) -v *~ *.exec *.out *.x

clean-obj:
	@$(RM) -v *.o

clean-lib:
	@$(RM) -v *.so
