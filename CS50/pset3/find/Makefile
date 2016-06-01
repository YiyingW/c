#
# Makefile
#
# Computer Science 50
# Problem Set 3
#

all: find generate

find: find.c helpers.c helpers.h
	clang -ggdb3 -O0 -std=c11 -Wall -Werror -o find find.c helpers.c -lcs50 -lm

generate: generate.c
	clang -ggdb3 -O0 -std=c11 -Wall -Werror -o generate generate.c

test_sort: test_sort.c helpers.c helpers.h
	clang -ggdb3 -O0 -std=c11 -Wall -Werror -o test_sort test_sort.c helpers.c -lcs50 -lm
	
clean:
	rm -f *.o a.out core find generate
	
