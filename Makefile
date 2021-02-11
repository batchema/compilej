token: token.c token.h utils.h
	clang -g -Wall -o token token.c utils.c

jc: token.c token.h parser.c parser.h jc.c utils.h utils.c
	clang -g -Wall -o jc jc.c parser.c token.c utils.c


