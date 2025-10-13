CC      := gcc
GDB     := cgdb

CFLAGS  := -Wall -Werror -Wextra -pedantic 
# -std=c99 
CDEBUG  := -fsanitize=address -fsanitize=undefined -fsanitize=leak -ggdb3 
CCMD    := ${CC} ${CFLAGS}
CDEV    := ${CC} ${CFLAGS} ${CDEBUG} 

BINDIR  := bin
TESTDIR := test
DEFDIR  := def
HEADDIR  := include

VALFL   := -s --track-origins=yes --leak-check=full --show-leak-kinds=all
MEMTEST := valgrind ${VALFL}

.DELETE_ON_ERROR:

.PHONY: clean clean-obj clean-lib betty

######## RELEASE

0build: clean
	# ${CCMD} source.c -o 0bin.x

######## DEVELOPMENT

dev-sorted_hash_table: clean
	${CDEV} 1-djb2.c 2-key_index.c 100-sortet_hash_table.c test-sorted_hash_table.c -o sorted_ht.x

######## RUN

0run: 0build
	# ./0bin.x

######## TEST

0test:
	# test suite

test-sorted_hash_tables: dev-hash_table
	@./sorted_ht.x 2>1 1>actual.out
	@nvim -O *.out

######## memory checks

0memtest:
	# ${MEMTEST} ./0bin.x

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
